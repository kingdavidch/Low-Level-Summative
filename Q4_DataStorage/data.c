#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int cGrade, mobileGrade, blockchainGrade;
} Student;

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    FILE *file = fopen("students.txt", "w");

    for (int i = 0; i < n; i++) {
        Student s;
        printf("Enter name: ");
        scanf("%s", s.name);
        printf("Enter grades (C, Mobile, Blockchain): ");
        scanf("%d %d %d", &s.cGrade, &s.mobileGrade, &s.blockchainGrade);
        fprintf(file, "%s %d %d %d\n", s.name, s.cGrade, s.mobileGrade, s.blockchainGrade);
    }
    fclose(file);

    printf("Data saved to students.txt\n");
    return 0;
}
