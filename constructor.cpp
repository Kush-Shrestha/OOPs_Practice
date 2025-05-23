#include <iostream>
using namespace std;
class Employee {
private:
    int employeeId;

public:
    
    Employee():Employee(1,2,3) {
        cout << "Default Constructor called" << endl;
    }
    Employee(int employeeId):Employee()  {
        cout << "Employee Constructor with single argument called" << endl;
        this->employeeId = employeeId;
    }
    Employee(int employeeId1, int employeeId2, int employeeId) {
        cout << "Employee Constructor with three arguments called" << endl;
    }

    int getEmployeeId() {
        return employeeId;
    }
};

int main() {
    Employee emp(10);  

    return 0;
}