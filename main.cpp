#include "Student.h"
//main function
int main()
{
    //Declaration of Variables
    string name,name1,roll,roll1;
    int age,age1;
    float gpa,gpa1;

    //Input from user
    cin.ignore();
    cout<<"Enter your details: \n";
    cout<<"Name: ";
    getline(cin,name);
    cout<<" Roll Number: ";
    getline(cin,roll);
    cout<<" Age: ";
    cin>>age;
    cout<<" CGPA: ";
    cin>>gpa;

    //Input from second user
    cin.ignore();
    cout<<"Enter your details: \n";
    cout<<"Name: ";
    getline(cin,name1);
    cout<<" Roll Number: ";
    getline(cin,roll1);
    cout<<" Age: ";
    cin>>age1;
    cout<<" CGPA: ";
    cin>>gpa1;

    //1st object with default constructor
    Student s1;
    s1.get();
    cout<<" Your grade is: "<<s1.grade()<<endl;

    //2nd object with parameterized constructor
    Student s2(name,roll,age,gpa);
    s2.get();
    cout<<"Your grade is: "<<s2.grade()<<endl;

    //3rd object with setter function
    Student s3;
    s3.set(name1,roll1,age1,gpa1);
    s3.get();
    cout<<"Your grade is: "<<s3.grade()<<endl;

    return 0;
}