# Student Records Management System (Q4)
## System Overview
📁 Project Layout
```plaintext
Q4_DataStorage/
├── src/
│   ├── main.c           # Main program implementation
├── include/
│   ├── student.h        # Header file for the Student structure and functions
├── Makefile             # Build automation file
├── README.md            # Documentation
├── students.txt         # Output file containing student data (generated at runtime)
```
## Purpose
A command-line application for managing student academic records. The system handles grade entries for three courses (C Programming, Mobile Dev, and Blockchain), validates input data, and provides persistent storage in CSV format.
## Core Features
🎯 **Data Management**
- Support for 5-100 student records
- Grade tracking for 3 courses
- Input validation system
- CSV file storage
🔄 **Memory Handling**
- Dynamic record allocation
- Efficient memory usage
- Proper resource cleanup
📊 **File Operations**
- CSV format storage
- Data persistence
- Structured output
## Quick Start
### Build
make
### Run
./record_manager
### Usage Steps
1. Start the program
2. Enter student count (5-100)
3. Input student details:
  - Full name
  - Course grades (0-100)
4. View saved data in records.txt
## Example Session
Input Format:
Number of students: 6
Student 1:
Name: Alice Chen
C Programming: 92
Mobile Development: 88
Blockchain: 95
[Continue for remaining students...]
Output Format (records.txt):
Student,C Prog,Mobile,Blockchain
Alice Chen,92,88,95
[Additional records...]
## Technical Details
### Data Structure
- Student Record:
 - Name storage
 - Grade arrays
 - Validation flags
### Main Functions
1. recordInput()
  - Data collection
  - Input validation
  - Memory management
2. fileStorage()
  - CSV formatting
  - File operations
  - Error handling
## Educational Benefits
- File I/O operations
- Memory management
- Data structures
- Input processing
## Future Updates
1. Database integration
2. Grade analytics
3. Search functionality
4. Backup system
## Build Options
# Standard build
make
# Execute program
./record_manager
# Remove build files
make clean
