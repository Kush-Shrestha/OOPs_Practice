#include <iostream>
#include <string>
using namespace std;

class Person {
public:
  string name;
  string address;
  string phoneNo;
  string email;
  Person() { 
    cout << "Default Contrutor" << endl;
 }
  Person(string name, string address, string phoneNo, string email) {
    this->name = name;
    this->address = address;
    this->phoneNo = phoneNo;
    this->email = email;
  }
};

class Student : public Person {
public:

  float fee;
  float marks;
  int rollno;

  Student(string name, string address, string phoneNo, string email, float fee,
          float marks, int rollno):Person(name, address, phoneNo, email)

  {


    this->fee = fee;
    this->marks = marks;
    this->rollno = rollno;
  }

  Student() : Person() { cout << "Student Constructor" << endl; }
};

class Teacher : public Person {
public:
  float salary;
  string subjectName;

  Teacher(string name, string address, string phoneNo, string email,
          float salary, string subjectName):Person(name, address, phoneNo, email)
  {
    this->salary = salary;
    this->subjectName = subjectName;
  }

  Teacher() : Person() { 
    cout << "Teacher Constructor" << endl;
 }
};

class Staff : public Person {
public:
  string department;
  float salary;
};

int main() {

  Student st;

  Teacher t;

  return 0;
}