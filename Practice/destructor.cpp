#include <iostream>
using namespace std;

int Count = 0;
class Decode {
public:
    Decode(){
        cout << "No. of Object created: " 
             << Count << endl;
        Count++;
    }
    ~Decode() {
        
        cout << "No. of Object destroyed: " << Count
             << endl;
        Count--;
    }
};

int main() {
    Decode t, t1, t2, t3;
    return 0;
}