#include <stdio.h>
#include <string.h>

#define SIZE 100

// Sorting callback functions
int ascending(const char *a, const char *b) { return strcmp(a, b); }
int descending(const char *a, const char *b) { return strcmp(b, a); }

// Sorting function
void sortNames(char names[SIZE][50], int count, int (*compare)(const char *, const char *)) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (compare(names[j], names[j + 1]) > 0) {
                char temp[50];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}

// Count function
int countNames(char names[SIZE][50]) {
    int count = 0;
    for (int i = 0; i < SIZE && names[i][0] != '\0'; i++) {
        count++;
    }
    return count;
}

// Main program
int main() {
    char names[SIZE][50] = {"Alice", "Bob", "Charlie", "David", ""};
    int (*functions[])(char[SIZE][50]) = {sortNames, countNames};

    printf("Choose an option:\n1. Sort Names\n2. Count Names\n");
    int choice;
    scanf("%d", &choice);

    if (choice == 1) {
        char order[4];
        printf("Enter sorting order (asc/desc): ");
        scanf("%s", order);
        if (strcmp(order, "asc") == 0)
            sortNames(names, countNames(names), ascending);
        else
            sortNames(names, countNames(names), descending);
        for (int i = 0; i < countNames(names); i++) {
            printf("%s\n", names[i]);
        }
    } else if (choice == 2) {
        printf("Total names: %d\n", countNames(names));
    }
    return 0;
}
