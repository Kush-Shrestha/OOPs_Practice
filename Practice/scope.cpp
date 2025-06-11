#include <iostream>
using namespace std;
class base1{
    public:
    base1(){
        cout << "Base constructor called" << endl;
    }
    void Function() {
        cout << "Base function called" << endl;
    }
};
class base2{
    public:
    base2(){
        cout << "Base2 constructor called" << endl;
    }
    void Function() {
        cout << "Base2 function called" << endl;
    }
};
class derived:public base2,public base1{// here at first base2 gets called and then base 1 gets called 
    public:
    derived(){
        cout << "Derived constructor called" << endl;
    }
};
int main(){
    derived d;  
    d.base2::Function(); // Calling base2 function
    d.base1::Function(); // Calling base1 function if you don't use :: then the compiler will collide and gives error
    return 0;
}