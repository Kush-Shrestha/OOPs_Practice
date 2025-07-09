#include <iostream>
using namespace std;
class Student {
    public:
    void display(){  
        cout << "Display function called" << endl;
    }
    Student(){
        cout<< "Constructor called" << endl;
    }
    ~Student(){
        cout << "Destructor called" << endl;
    }
};
int main(){
    Student s1, s2;
    Student::display();
    return 0;
}