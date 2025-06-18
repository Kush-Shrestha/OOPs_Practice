#include<iostream>
using namespace std;
class Connection{
    public:
    virtual void connect(){
        cout << "Connecting to database..." << endl;
    }
    virtual void disconnect(){
        cout << "Disconnecting from database..." << endl;
    }
};
class purposal: public Connection{
    public:
    void connect(){
        cout << "Connecting to purposal database..." << endl;
    }
    void disconnect(){
        cout << "Disconnecting from purposal database..." << endl;
    }
};
int main(){
}