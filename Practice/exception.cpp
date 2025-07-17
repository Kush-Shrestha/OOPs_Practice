#include <iostream>

using namespace std;

// throw
//

/**
 *
 *
 * int divide(int a,int b)
{
    if(b==0)
    {
        throw "Division by zero";
    }
    return a/b;
}

 catch with (const char* c)
 *
 *
 *
 */

/**
 *
 *
 * int divide(int a,int b)
{
    if(b==0)
    {
        throw 1;
    }
    return a/b;
}

 catch with (int c)
 *
 *
 *
 */

class AnotherException:public  exception
{

//public:

public:
    const char* what() const noexcept override {
        return "My AnotherException";
    }
//    const char* what() override
//    {
//        return "My AnotherException";
//    }
//public:
//    virtual const char* what() const _NOEXCEPT;
};

class MyException
{

};

int divide(int a,int b)
{
    if(b==0)
    {
        throw "Division by zero";
    }
    return a/b;
}


void throwMultipleException(int a)
{
    switch (a) {
        case 1: throw 1;
        case 2: throw 1.1;
        case 3:throw "Character Exception";
        case 4: throw  MyException();
        case  5: throw runtime_error("my runtime error");
        default: throw AnotherException();
    }
}



int main() {
    // Write C++ code here
//    std::cout << "Try programiz.pro";

//    int a =1;
//    int b =0;
//
//    int c;
//    try{
//         c = divide(4,0);
//    }catch (const char* e)
//    {
//        cout<<"Reason of Exception:----"<<e<<endl;
//    }



//    cout<<c;

try{
    throwMultipleException(4);
}
catch (int i)
{
    //
    cout<<"excpetion from integer-->"<<i<<endl;
}catch (double d)
{
    //
    cout<<"excpetion from double-->"<<d<<endl;
}catch(const char* c)
{
    cout<<"char exception"<<c<<endl;
}catch(exception& e)
{
    cout<<"Inside exception block----"<<e.what()<<endl;
}
catch (...)
{
 cout<<"exception occured"<<endl;
}
cout<<"after exception";


    return 0;
}