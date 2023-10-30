# School Management System

The School Management System is a console-based C++ application that allows users to manage student and teacher records. This system is designed for educational institutions to keep track of student and teacher information. It provides functionalities for adding, retrieving, and displaying student and teacher details.

## Table of Contents

- [Features](#features)
- [Prerequisites](#prerequisites)
- [Usage](#usage)
- [Code Structure](#code-structure)
- [Customization](#customization)
- [License](#license)

## Features

1. **Student Management**
   - Add students with their name, class, section, roll number, and scholar number.
   - Find and retrieve student information by scholar number.
   - Display a list of all student details.

2. **Teacher Management**
   - Add teachers with their name, employee ID, subject, class, and section.
   - Find and retrieve teacher information by employee ID.
   - Display a list of all teacher details.

3. **User-Friendly Menu**
   - An interactive menu allows users to select options easily.

4. **Data Storage**
   - Student and teacher information is stored in linked lists for efficient data management.

5. **Clear Console Screen**
   - The system uses "system("cls")" (Windows) to clear the console screen for a cleaner display.

## Prerequisites

To run the School Management System, you need:

- A C++ compiler (e.g., g++) to compile and execute the program.
- A terminal or command prompt to interact with the application.

## Usage

1. **Compile the Program**
   - Compile the program using a C++ compiler, for example:
     ```bash
     g++ main.cpp -o school_management
     ```

2. **Run the Program**
   - Execute the compiled program:
     ```bash
     ./school_management
     ```

3. **Interact with the Menu**
   - The program will display a menu with options for managing student and teacher records.

4. **Input Information**
   - Follow the prompts to input information about students and teachers.

5. **Retrieve and Display Information**
   - Use the menu options to retrieve and display student and teacher information.

6. **Exit**
   - Choose the "Exit" option to exit the program.

## Code Structure

The project consists of the following files:

- `student.h`: Header file containing classes and structures for managing student records.
- `teacher.h`: Header file containing classes and structures for managing teacher records.
- `main.cpp`: The main C++ program providing the console-based interface.

## Customization

This is a basic foundation for a school management system. You can customize and extend it to meet your specific requirements. Potential improvements include adding error handling, improving the user interface, and saving data to files for persistence.

## License

This project is open-source and available under the MIT License. Feel free to modify and use it for your own projects.

---

Feel free to contribute, report issues, or suggest enhancements to this project. Thank you for using the School Management System!
