# Parallel Sum Calculator (Q3)
## System Architecture
📦 Project Structure
```plaintext
Q3_Multithreads/
├── src/
│   ├── main.c           # Main program implementation
├── include/
│   ├── multithread_sum.h # Header file for multithreading logic
├── Makefile             # Build automation file
├── README.md            # Documentation
```
## Core Concept
A high-performance C program that leverages parallel processing to compute the sum of a large sequence of numbers. The system divides the computation across 10 concurrent threads for optimal performance.
## Key Capabilities
✨ **Parallel Processing**
- Distributes computation across 10 worker threads
- Each thread handles an equal segment of data
- Thread-safe partial sum calculation
🔄 **Dynamic Memory**
- Flexible array size handling
- Efficient memory allocation
- Resource cleanup
📊 **Performance Monitoring** 
- Thread activity tracking
- Segment allocation display
- Partial sum reporting
## Getting Started
### Build Instructions
make
### Launch Application
./thread_sum
### Basic Usage
1. Launch the program
2. Enter n (must exceed 1000)
3. View thread computations
4. Get final sum result
## Output Example
```plaintext
Input:
Enter n (>1000): 1500
Result Display:
Thread[1]: Range[0-149] Sum: 11175
Thread[2]: Range[150-299] Sum: 33525
Thread[3]: Range[300-449] Sum: 55875
[Additional thread outputs...]
Final Sum: 1125750
```
## Technical Implementation
### Thread Components
- ThreadArgs Structure:
 - Data segment pointers
 - Index range
 - Partial results
 - Thread identifier
### Core Functions
1. partialSumCompute()
  - Segment processing
  - Sum accumulation
  - Status reporting
2. totalSumCalculate()
  - Thread creation
  - Work distribution
  - Result aggregation
## Performance Features
- Parallel execution
- Efficient workload distribution
- Minimal thread overhead
- Clear progress tracking
## Educational Value
- Thread programming
- Parallel algorithms
- Memory management
- Performance optimization
## Future Enhancements
1. Configurable thread count
2. Advanced error handling
3. Performance metrics
4. UI improvements
## Build Commands
# Compile
make
# Execute
./thread_sum
# Cleanup
make clean
## Developer Details
