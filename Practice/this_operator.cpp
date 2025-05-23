#include<iostream>
using namespace std;

class Test
{
private:
   int x;
public:
   void set (int x)
   {
       this->x = x;
   }
   void print() {
     cout << "x = " << x << endl; }
};

int main()
{
   Test obj;
   int x = 20;
   obj.set(x);
   obj.print();
   return 0;
}