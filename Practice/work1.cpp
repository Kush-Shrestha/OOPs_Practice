#include<iostream>
using namespace std;
class Parent{
    public:
    Parent():Parent(1) { 
        cout << "Parent class constructor called" << endl;
    }
    Parent(int x):Parent(1, 10) {
        cout << "Parent class parameterized constructor called with single argument"<< endl;
    }
    Parent(int x,int y) {
        cout << "Parent class parameterized constructor called with two argument"<< endl;
    }
};
class Child : public Parent{
    public:
    Child(){
        cout << "Child class constructor called" << endl;
    }   
    Child(int x):Child() {
        cout << "Child class parameterized constructor called with single argument" << endl;
    }
    Child(int x, int y) : Child(1) {
        cout << "Child class parameterized constructor called with two arguments" << endl;
    }
};
int main() {
    Child obj(10,20);
    return 0;
}