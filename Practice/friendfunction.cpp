#include <iostream>
using namespace std;

class Student {
private:
    int rollNumber;

public:
    Student(int roll) {
        this->rollNumber = roll;
    }

    friend int operator==(Student a, Student b);
};

int operator==(Student a, Student b) {
    return a.rollNumber == b.rollNumber;
}

int main() {
    Student s1(101);
    Student s2(102);
    cout << (s1 == s2) << endl;
    return 0;
}