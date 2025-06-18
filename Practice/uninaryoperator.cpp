#include <iostream>
using namespace std;

class Student {
private:
    int rollNumber;

public:
    Student(int roll) {
        this->rollNumber = roll;
    }

    Student operator++() {
        Student temp(++rollNumber);
        return temp;
    }

    void print() {
        cout << to_string(rollNumber) << endl;
    }
};

int main() {
    Student s1(1);
    s1.print();
    Student s2 = ++s1;
    s2.print();
    return 0;
}