#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

// 🔒 1. Username/password error
class UsernamePasswordNotFoundException : public exception {
private:
    string message;
public:
    explicit UsernamePasswordNotFoundException(const string& username)
            : message("Login failed: Username or password not found for user '" + username + "'") {}

    const char* what() const noexcept override {
        return message.c_str();
    }
};

// 🛢 2. Database connection error
class DatabaseConnectionException : public exception {
private:
    string message;
public:
    explicit DatabaseConnectionException(const string& dbName)
            : message("Database error: Unable to connect to database '" + dbName + "'") {}

    const char* what() const noexcept override {
        return message.c_str();
    }
};

// 📦 3. Data not found
class DataNotFoundException : public exception {
private:
    string message;
public:
    explicit DataNotFoundException(const string& dataType)
            : message("Data not found: '" + dataType + "' record does not exist.") {}

    const char* what() const noexcept override {
        return message.c_str();
    }
};

// ❌ 4. Invalid input
class InvalidInputException : public exception {
private:
    string message;
public:
    explicit InvalidInputException(const string& detail)
            : message("Invalid input: " + detail) {}

    const char* what() const noexcept override {
        return message.c_str();
    }
};

// 🔧 Simulated functions
void login(const string& username, const string& password) {
    if (username != "kush" || password != "secure123") {
        throw UsernamePasswordNotFoundException(username);
    }
}

void connectToDatabase(const string& dbName) {
    if (dbName != "userdb") {
        throw DatabaseConnectionException(dbName);
    }
}

void fetchUserData(int userId) {
    if (userId != 1) {
        throw DataNotFoundException("User ID " + to_string(userId));
    }
}

void validateInput(const string& input) {
    if (input.empty()) {
        throw InvalidInputException("Input cannot be empty.");
    }
}

int main() {
    try {
        connectToDatabase("userdb");
        login("kush", "wrongpass");
        validateInput("");
        fetchUserData(99);
    }
    catch (const DatabaseConnectionException& e) {
        cout << "[DB Error] " << e.what() << endl;
    }
    catch (const UsernamePasswordNotFoundException& e) {
        cout << "[Login Error] " << e.what() << endl;
    }
    catch (const InvalidInputException& e) {
        cout << "[Validation Error] " << e.what() << endl;
    }
    catch (const DataNotFoundException& e) {
        cout << "[Data Error] " << e.what() << endl;
    }
    catch (const exception& e) {
        cout << "[Generic Error] " << e.what() << endl;
    }

    cout << "Program continues...\n";
    return 0;
}