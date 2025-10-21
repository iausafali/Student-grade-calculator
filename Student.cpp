#include "Student.h"    //including header file
//Assigning Default Values to Default Constructor
Student::Student()
{
    name="unknown";
    roll_num="xxxxx";
    age=0;
    gpa=0.0;
}

//assigning Values taken from user to parameterized constructor
Student::Student(string n,string r,int a, float g)
{
    name=n;
    roll_num=r;
    age=a;
    gpa=g;
}
//Setting Values of object using Setter Function
void Student::set(string n,string r,int a, float g)
{
    name=n;
    roll_num=r;
    age=a;
    gpa=g;
}
//Getting values of object using Getter Function
void Student::get()
{
    cout<<"Name: "<<name<<"|| Roll Number: "<<roll_num<<"|| Age: "<<age<<"|| CGPA: "<<gpa;
}
//Calvulating Grade of Student and returning it
char Student::grade()
{
    if(gpa>3.5)
    {
    return 'A';
    }
    else if(gpa>2.75)
    {
        return 'B';
    }
    else if(gpa>2.25)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}
//Destructor to destruct all data related to object
Student::~Student()
{
    cout<<"Record of "<<name<<" Deleted Successfully! \n";
}