**Student Record Management System (C++)**
_Overview_

This project is a simple Student Record Management System built using Object-Oriented Programming (OOP) principles in C++.
It demonstrates key OOP features such as constructors, destructors, encapsulation, and data abstraction.

**Features**

Default and Parameterized Constructors
Proper use of Setters and Getters
Destructor that clears memory automatically
Grade Calculation based on student’s GPA
Interactive user input via console

**Concepts Demonstrated**

Object creation and destruction
Data encapsulation with private members
Constructor overloading
Function definitions inside and outside the class
Basic console I/O and formatted output

🧩 Class Structure
class Student {
    string name, roll_num;
    int age;
    float gpa;

public:
    Student();                              // Default Constructor
    Student(string n, string r, int a, float g);  // Parameterized Constructor
    ~Student();                             // Destructor

    void set(string n, string r, int a, float g);
    void get();
    char grade();
};

** Program Flow**

Create an object with default constructor

Create another using parameterized constructor

Create a third using setter function

Display all data and the calculated grade

Destructor automatically deletes records after program execution

**Sample Output**
Enter your details:
Name: Hussain
Roll Number: CS-101
Age: 20
CGPA: 3.7

Name: unknown Roll Number: xxxxx Age: 0 CGPA: 0
Your grade is: F
Record Deleted Successfully!

Name: Hussain Roll Number: CS-101 Age: 20 CGPA: 3.7
Your grade is: A
Record Deleted Successfully!

Name: Hussain Roll Number: CS-101 Age: 20 CGPA: 3.7
Your grade is: A
Record Deleted Successfully!

**How to Run:**

Clone the repository:
git clone https://github.com/yourusername/your-repository-name.git
Open the project folder in Visual Studio Code or any IDE.

**Compile and run:**
g++ main.cpp -o main
./main

_(Make sure Student.h and Student.cpp are in the same directory.)_

**Topics:**
cpp oops constructors destructors record-management system student-management programming
**Author:**
Ausaf ALI
Developed for practicing C++ OOP fundamentals and object lifecycle management.
