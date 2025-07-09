#include <iostream>
class A {
private:
    char* name; 

public:
    A() {
        name = new char[50]; 
        name[0] = '\0'; 
    }

    ~A() {
        delete[] name; 
    }

    void addNewStudent(const char* studentName) {
        strcpy(name, studentName);
        std::cout << "New student added: " << name << std::endl;
    }

    void display() const {
        std::cout << "Student name: " << name << std::endl;
    }
};

int main() {
    A* student = new A(); 
    A->addNewStudent("Alice"); 
    A->display(); 
    delete A; 
    return 0;
}