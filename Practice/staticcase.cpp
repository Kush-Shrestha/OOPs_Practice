#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base show()" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived display()" << endl;
    }
};

int main() {

    Base b;

    Derived* d = static_cast<Derived*>(&b);

    d->display();
    d->show();


//    Derived d;
//    d.show();
//
//    // Upcasting: Derived* → Base*
//    Base* b = static_cast<Base*>(&d);
//
//    b->show();     // ✅ OK: Base method is accessible
//    // b->display(); // ❌ Error: display() is not part of Base

    return 0;
}