#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    int rollNo;
    string name;
public:
    Student(int rollNo,string name)
    {
        this->rollNo = rollNo;
        this->name= name;
    }
    //          object ref of Kush
 int addRollNo(Student s)
 {
   int sum = this->rollNo+s.rollNo;
   return sum;
 }

    int operator+(Student s)
    {
        int sum = this->rollNo+s.rollNo;
        return sum;
    }

  bool compareRollNo(Student s)
  {
        if(this->rollNo==s.rollNo)
        {
            return  true;

        }
        return false;
  }

    bool operator==(Student s)
    {
        if(this->rollNo==s.rollNo)
        {
            return  true;

        }
        return false;
    }


};

int main() {

    Student Kushal(1,"Kushal");
    Student Kush(1,"Kush");

 int sum1 = Kushal.addRollNo(Kush);

 cout<<sum1<<endl;

    int sum2 =Kushal.operator+(Kush);

    cout<<sum2<<endl;

    //       Kushal.operator+(Kush)
    int sum3 = Kushal+Kush;
    cout<<sum3<<endl;

    bool rollNoEqual = Kushal.compareRollNo(Kush);

    cout<<rollNoEqual;

    bool rollNoEqual2 = Kushal.operator==(Kush);
    cout<<rollNoEqual2<<endl;

    //                  .operator==(Kush)
    bool rollNoEqual3 = Kushal==Kush;

    cout<<rollNoEqual3<<endl;

    return 0;

}