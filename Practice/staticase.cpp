#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        // NOTE: Base class has display() but prints misleading text
        cout << "Derived display()" << endl;
    }

    virtual void show() {
        cout << "Base show()" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived display()" << endl;
    }

    void show() override {
        cout << "Derived show()" << endl;
    }
};

int main() {
    Base b;                          // Creates a Base object
    Base* basePtr = &b;              // basePtr points to a Base object

    Derived* d = static_cast<Derived*>(basePtr); // ⚠ Unsafe cast! Actual object is Base

    d->display();  // ⚠ Undefined behavior; statically bound to Derived::display()
                   // ✅ Output: Derived display()

    d->show();     // Virtual function → dynamic binding
                   // Actual object is Base → Base::show() is called
                   // ✅ Output: Base show()


    Derived d1;                      // Create Derived object

    Base b1 = d1;    // Object slicing: only Base part is copied to b1

    b1.show();       // Virtual, but b1 is not a pointer/reference → static binding
                     // ✅ Output: Base show()

    b1.display();    // Non-virtual → static binding to Base::display()
                     // ✅ Output: Derived display() (printed by Base::display())


    Derived d2;                     // Unused object

    Base* b2 = &d1;  // Base pointer to Derived object

    b2->show();      // Virtual → dynamic binding, actual object is Derived
                     // ✅ Output: Derived show()

    b2->display();   // Non-virtual → static binding to Base::display()
                     // ✅ Output: Derived display() (printed by Base::display())

    return 0;
}