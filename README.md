# **Programming C Summative Assessment**

## **Author Details**

- **Name:** Kingdavid Chukwumere 
- **School:** African Leadership University  
- **Year:** 2
- **Term:** 3
- 

## **Overview**
This repository contains my summative assessment for the Programming C course. The project showcases my understanding and implementation of core C programming concepts, including string manipulation, function pointers, multithreading, file handling, and Arduino hardware integration.


### **Repository Link**
[GitHub Repository](git@github.com:CharlesMwaniki/Programming_C_Summative.git)

## **Project Structure**
The assessment consists of four main components, each focusing on different programming concepts. Here's the directory structure:

### **Directory Structure**
├── Q1_StringManipulation.c    # Name sorting with callback functions
├── Q2_ArduinoControl.ino      # Arduino light control system  
├── Q3_ThreadComputing.c       # Parallel sum calculation
├── Q4_FileHandling.c          # Student records management
├── README.md                  # Project documentation

## **File Descriptions**

### **1. Q1_StringManipulation.c**
- **Description:** String handling implementation using function pointers and callbacks
- **Key Features:**
 - Sorts student names array in ascending/descending order
 - Name counter functionality
 - Dynamic operation selection using function pointers
   
- **Usage:**
 gcc Q1_StringManipulation.c -o StringManip
 ./StringManip
  
### **2. Q2_ArduinoControl.ino**
- **Description:** Light control system using Arduino
  
- **Key Features:**
 - Remote-controlled light switching
 - Hardware integration with relay and sensors
 - Power management system
   
- **Setup:**
 - Load into Arduino IDE
 - Connect circuit components
 - Upload and test functionality
   
### **3. Q3_ThreadComputing.c**
- **Description:** Parallel computing implementation for number summation
- **Key Features:**
 - 10-thread parallel processing
 - Efficient sum calculation
 - Thread synchronization
   
- **Usage:**
 gcc -pthread Q3_ThreadComputing.c -o ThreadComp
 ./ThreadComp
  
### **4. Q4_FileHandling.c**
- **Description:** Student data management system
- **Key Features:**
 - Structured data organization
 - File-based storage system
 - Course grade tracking

- **Usage:**
 gcc Q4_FileHandling.c -o FileHandle
 ./FileHandle
## **Core Concepts Demonstrated**
### **String Manipulation**
- Advanced callback implementation
- Dynamic string operations
### **Hardware Control**
- Arduino programming
- Circuit design principles
- Sensor integration
### **Parallel Processing**
- Thread management
- Synchronized computing
- Performance optimization
### **Data Management**
- File operations
- Data structuring
- Persistent storage


## **Summary**
This project demonstrates my proficiency in C programming through practical implementations of various programming concepts. Each component showcases different aspects of low-level programming skills.
