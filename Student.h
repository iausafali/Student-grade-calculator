#include <iostream>
using namespace std;

class Student
{
    string name, roll_num;
    int age;
    float gpa;

public:
    // Default Constructor to assign values temporarily
    Student();

    // Parameterized Constructor to assign values from user
    Student(string n, string r, int a, float g);

    // Destructor for destructinng every thing related to object to clear memory
    ~Student();
    // Setter function to set student details
    void set(string n, string r, int a, float g);
    // Getter function to get student details
    void get();

    char grade();
};