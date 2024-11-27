# Q1: Name Management System
## Project Structure

Q1_SortingNames/
├── src/
│   ├── main.c           # Main program implementation
│   ├── sort.c           # Sorting logic implementation
│   ├── count.c          # Counting logic implementation
│   └── utils.c          # Utility functions for displaying and handling names
├── include/
│   ├── sort.h           # Header file for sorting logic
│   ├── count.h          # Header file for counting logic
│   └── utils.h          # Header file for utility functions
├── README.md            # Documentation for the project
├── Makefile             # Build automation file

## About
A C program that manages a collection of student names through sorting and counting functionalities. The system employs function pointers and callbacks to handle name operations dynamically.
## Core Features
### Dynamic Name Sorting
- Sort names alphabetically (ascending/descending)
- Uses callback functions for sorting direction
- String comparison via `strcmp`
### Name Counter
- Tracks total number of names
- Validates name entries
- Provides accurate count
### Interactive Menu
- Function pointer array for operation selection
- User-friendly interface
- Dynamic operation execution
## Usage Guide
### Building the Project
make
### Running
./sorting_names
### Menu Options
1. Name Sorting
  - Select sorting mode (asc/desc)
  - View sorted results
2. Name Counting
  - Get total name count
  - View count result
## Sample Outputs
### Sort Operation
Menu:
1. Sort Names
2. Count Names
> 1
Order (asc/desc): asc
Results:
Alice
Bob
Charlie
David
Eve
### Count Operation
Menu:
1. Sort Names
2. Count Names
> 2
Total Names: 5
## Code Organization
### Source Files
- main.c: Program entry and flow control
- sort.c: Sorting algorithms
- count.c: Counting mechanisms
- utils.c: Support functions
### Headers
- sort.h: Sorting interfaces
- count.h: Counting interfaces
- utils.h: Utility interfaces
### Build System
Makefile handles:
- Compilation
- Cleanup (make clean)
## Key Learnings
- String handling in C
- Function pointer implementation
- Modular code design
## Enhancement Plans
1. Dynamic name input system
2. Case sensitivity options
3. Input validation improvements
