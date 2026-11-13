
# 📚 Library Management System #

## 📌 Project Overview

The **Library Management System** is a menu-driven application developed using the C programming language.

This project is designed to manage library book records efficiently. It allows users to add new books, display available books, search for books, edit book information, issue books and maintain book availability.

The application uses **Structures, Pointers, Singly Linked Lists (SLL), File Handling and User-Defined Functions** to manage book records.

Book information is stored in a file so that previously saved records are available even after restarting the application.



## 🎯 Project Objectives

- To maintain book records efficiently.
- To add, display, search and modify book information.
- To manage the availability of books.
- To avoid duplicate book entries.
- To implement dynamic memory allocation using linked lists.
- To maintain records permanently using file handling.


## ✨ Features

The application provides the following operations:

 Option   Operation      Description 

   A     Add Book        Add a new book to the library. 
   L     List Books      Display all available books. 
   C     Count Books     Display the count of a specific book. 
   E     Edit Book       Modify existing book information. 
   T     Take Book       Issue a book from the library. 
   F     Find Book       Search books by title or author. 
   S     Save            Save book information into a file. 
   Q     Quit            Exit the application. 



## 📖 Book Information

Each book record contains the following details:

1. Book Name
2. Author Name
3. Number of Pages
4. Number of Books Available

---

## 🛠️ Technologies Used

- **Programming Language:** C
- **Data Structures:** Structures and Singly Linked List
- **Pointers:** Structure Pointers
- **File Handling:** File Operations
- **Dynamic Memory Allocation:** malloc() and free()
- **Build Tool:** Makefile and Make Utility
- **Development Environment:** Linux Terminal

## Project Structure
File - Description 
main.c - Main program 
library.c - Library-related operations 
library.h - Library function declarations 
file.c - File handling operations 
file.h - File handling function declarations 
types.h - User-defined data types 
books.txt - File for storing book information 
makefile - Automates compilation and linking 

## ⚙️ Concepts Implemented

This project demonstrates the practical implementation of:

- Structures and Typedef
- Structure Pointers
- Singly Linked Lists
- Dynamic Memory Allocation
- User-Defined Functions
- String Handling
- File Handling
- Modular Programming
- Makefile



## 📂 Project Structure


Library_Management_System/
│
├── main.c
├── add.c
├── list.c
├── count.c
├── edit.c
├── take.c
├── find.c
├── save.c
│
├── library.h
├── Makefile
├── books.txt
│
└── README.md


## 🚀 Compilation and Execution




## 💻 Application Menu

When the application is executed, the following menu is displayed:

------------------ MENU ------------------

A/a : Add a new book to library
L/l : List available books
C/c : Display count of specific book
E/e : Edit book information
T/t : Take a book from library
F/f : Find book in library
S/s : Save books information
Q/q : Quit from application

-------------------------------------------
Enter your choice:




## 💾 File Handling

File handling is implemented to maintain book records permanently.

- Book information is stored in a file.
- Saved records can be accessed when the application is launched again.
- Changes to book records can be saved for future use.

This helps maintain library information between application executions.

---

## 📌 Project Requirements

- Duplicate book entries should not be stored.
- Different books can have the same author.
- The same book can have multiple authors.
- Each operation is implemented using user-defined functions.
- A Makefile is used to compile multiple source files.


## 🎓 Learning Outcomes

Through this project, I gained practical knowledge of:

- Implementing linked lists using structures and pointers.
- Managing dynamic memory allocation.
- Performing file operations in C.
- Developing menu-driven applications.
- Organizing programs using modular programming.
- Managing multiple source files using Makefile.


##  Author

Saisoujanya Narsingoju 
Embedded Systems Trainee 
