#include<iostream>
using namespace std;
class Complex{
    private:
    int real;
    int imaginary;

    public:
    Complex(int real=0,int imaginary=0){
        this->real = real;
        this->imaginary = imaginary;
    }

    Complex operator+(Complex c){
        Complex sum;
        sum.real = this->real + c.real;
        sum.imaginary = this->imaginary + c.imaginary;
        return sum;
    }
    void print(){
        cout << to_string(real) << " + " << to_string(imaginary) << "i" << endl;
    }

};
int main(){
    Complex c1(3, 2), c2(1, 4);
    Complex c3 = c1 + c2;
    Complex c3=c1.operator+(c2);// We can also use this syntax to call the operator+ function and it's 
    c3.print();// called operator overloading
    return 0;
}