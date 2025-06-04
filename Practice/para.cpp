#include<iostream>
using namespace std;
class Base{
    public:
    Base() {
        cout << "Base class constructor called" << endl;
    }
};
class Derived : public Base {
    public:
    Derived() {
        cout << "Derived class constructor called" << endl;
    }
    Derived(int x):Derived() {
        cout << "Derived class parameterized constructor called with value"<< endl;
    }
};
int main(){
    Derived d(10); 
}