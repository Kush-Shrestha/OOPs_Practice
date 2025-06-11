#include <iostream>
using  namespace  std;

class Parent{
public:
    int pubVar;
protected:
    int protVar;
private:
    int privVar;

public:
     void showVariable()
     {
         cout<<"Private Var==>"<<privVar<<endl;
         cout<<"Protected Var==>"<<protVar<<endl;
         cout<<"Public Var==>"<<pubVar<<endl;
     }
};
class Child: private Parent{

//private:
//    void showVariable()
//    {
//        cout<<"Private Var==>"<<privVar<<endl;
//        cout<<"Protected Var==>"<<protVar<<endl;
//        cout<<"Public Var==>"<<pubVar<<endl;
//    }
public:
    void childShow()
    {
        showVariable();
////        cout<<"Private Var==>"<<privVar<<endl;
//        cout<<"Protected Var==>"<<protVar<<endl;
//        cout<<"Public Var==>"<<pubVar<<endl;
    }

};

class Child2: protected Child
{
public:
    void showChild2()
    {
        cout<<"Private Var==>"<<protVar<<endl;
//        showVariable();
    }
};
//class Child3:public Child2{
//
//};

int main() {

//    Child c;
//    c.childShow();
    Child2 c2;
    c2.showChild2();

//    Parent p;
//    p.showVariable();
//
//   Child c;
////   c.showVariable();
//   c.childShow();
//Child2 c2;
//c2.showChild2();
    return 0;
}