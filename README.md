# Student Record System

## Description
This is a command-line application built in C++ to manage student records. It allows users to perform CRUD operations (Create, Read, Update, Delete) on student data, including student ID, name, and marks. The program uses object-oriented programming (OOP) principles and file handling to persist data across sessions.

## Features
- Add a new student with ID, name, and marks.
- Display all student records.
- Update an existing student's name and marks by ID.
- Delete a student record by ID.
- Data is stored in a text file (`students.txt`) for persistence.

## Technologies Used
- **C++**: Core programming language with OOP concepts (classes, objects).
- **File Handling**: Standard C++ libraries (`fstream`) for reading/writing to files.
- **STL**: Utilizes `vector` for dynamic storage of student records.

## How to Run
1. **Prerequisites**: A C++ compiler (e.g., g++, MinGW, or any IDE like Code::Blocks).
2. **Clone the Repository**:
   ```bash
   git clone https://github.com/Gobikrishnanpro/StudentRecordSystem.git
   cd StudentRecordSystem
   g++ StudentRecordSystem.cpp -o sr
   ./sr

## Sample Usage
1.Add: Enter 1, then input 101 John 85.5. || 
2.Display: Enter 2 to see all records. || 
3.Update: Enter 3, then 101 Jane 90.0 to update. || 
4.Delete: Enter 4, then 101 to remove.

## File Structure
StudentRecordSystem.cpp: Main source code.
students.txt: Generated file storing student data (created on first run).

## Author
Gobi Krishnan - A Java Full-Stack student exploring C++ for system programming.

License
This project is open-source and available under the MIT License.

## Output:
![stud_add](https://github.com/user-attachments/assets/93ecd4ff-ad92-435a-a737-b4efb8d89a03)
![stud_dis](https://github.com/user-attachments/assets/62c4d92d-5074-488d-8679-22d9b89387e5)
![stud_update](https://github.com/user-attachments/assets/52f70d8c-b488-498b-8512-bf20e4a1daa7)


