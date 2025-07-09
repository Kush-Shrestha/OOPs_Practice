#include<iostream>
#include<string>
using namespace std;
 
class Student{
    private:
        int rollno;
        string name;
    
    public:
    Student(int rollno=0, string name="")
    {
        this->rollno = rollno;
        this->name = name;
    }
    bool operator==(Student s){
        return (this->rollno == s.rollno && this->name == s.name);
    }
    void print(){
        cout<<"Roll No is "<<to_string(rollno)<<" and Name is "<<name<<endl;
    }
};
int main(){
    Student s1(1, "Kushal");
    Student s2(2, "Kush");
    bool isEqual= s1==s2;// this can also be written as s1.operator==(s2);
    // and this method is called operator overloading
    if(isEqual){
        cout<<"Both students are equal"<<endl;
    }
    else{
        cout<<"Both students are not equal"<<endl;
    }
    s1.print();
    s2.print();
    return 0;
}