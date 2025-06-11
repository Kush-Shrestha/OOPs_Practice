#include<iostream>
using namespace std;
class base1{
    public:
    base1(){
    cout<<"Base1 constructor called"<<endl;
}};
class base2{
    public:
    base2(){
    cout<<"Base2 constructor called"<<endl;
}};
class base3{
    public:
    base3(){
    cout<<"Base3 constructor called"<<endl;
}};
class derived:public base2,public base1,public base3{
    };
int main(){
    derived d; 
    return 0;
}