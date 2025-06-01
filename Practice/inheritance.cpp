#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
    string name;
    string address;
    int phone_no;
    Person(string name,string address, int phone_no){
        this->name = name;
        this->address = address;
        this->phone_no = phone_no;
    }

};
class Student: public Person{
    public:
    int roll_no;
    string course;
    float fee;
    Student(int roll_no, string course, float fee, string name, string address, int phone_no): Person(name, address, phone_no){
        this->roll_no = roll_no;
        this->course = course;
        this->fee = fee;
    }   
   
};
class Teacher: public Person{
    public:
    string subject;
    float salary;
    Teacher(string subject, float salary, string name, string address, int phone_no): Person(name, address, phone_no){
        this->subject = subject;
        this->salary = salary;
    }
};
Display
int main(){
    Student s1;
    s1.name="Kush
}