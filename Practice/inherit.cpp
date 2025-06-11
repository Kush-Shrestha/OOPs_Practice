#include<iostream>
#include<string>
using namespace std;
class Parent {
    public:
        int publicVariable;
    protected:
        int protectedVariable;
    private:
        int privateVariable;
    public:
    void showVariables() {
        cout << "Private Variable: " << privateVariable << endl;
        cout << "Protected Variable: " << protectedVariable << endl;
        cout << "Public Variable: " << publicVariable << endl;
    }
};
class Child : public Parent {  
   public:
   void childshow(){
         showVariables();
   }
};
class child2 : public Child {
   public:
   void showChild2(){
         showVariables(); 
   }
};
class child3: public child2 {
    public:
    void showChild3(){
            showVariables(); 
    }
};


int main(){
    Child c;
    c.childshow(); 
}