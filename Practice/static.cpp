#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    static string collegeName; // Static member declaration



     void display() {
        cout << "Name: " << name << ", Roll No: " << rollNo
            << ", College: " << collegeName << endl;
     }
};

string  Student::collegeName = "Radiant";

int main() {
    Student niraj,Kushal, King;

    // Initializing student data
    niraj.rollNo = 1;
    niraj.name = "Niraj";
    niraj.collegeName = "testing";


    Kushal.rollNo = 2;
    Kushal.name = "Kushal";

    King.rollNo = 3;
    King.name = "King";
    King.collegeName = "TEsting123 King";


    // Displaying student details
     niraj.display();
     Kushal.display();
     King.display();
     return 0;
}