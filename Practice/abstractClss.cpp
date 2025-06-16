#include <iostream>
using namespace std;

// abstract class
class Connection
{
public:
    // abstract method
    virtual void connect()=0;


    virtual  void query()=0;
    virtual void disconnect()=0;
    void implementedMethod()
    {

    }

};
// abstract class
class MyConnectionMiddle{
public:
    void connect()
    {
        cout<<"Oracle Connnection ";
    }
    void query()
    {
        cout<<"Oracle Query";

    }
};

class OracleConnection:Connection{
public:
    void connect()
    {
        cout<<"Oracle Connnection ";
    }
    void query()
    {
        cout<<"Oracle Query";

    }
    void disconnect()
    {
        cout<<"Oracle Disconnect";
    }
};
class PostgresConnection:Connection{
public:
    void connect()
    {
        cout<<"Postgres Connnection ";
    }
    void query()
    {
        cout<<"Postgres Query";

    }
    void disconnect()
    {
        cout<<"Postgres Disconnect";
    }
};
class MyDatabase:Connection{

};


int main() {
    OracleConnection oc;
    oc.connect();
    oc.query();
    oc.disconnect();

    PostgresConnection pc;
    pc.connect();
    pc.query();
    pc.disconnect();

}
