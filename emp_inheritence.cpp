#include <iostream>
using namespace std;

class basicInfo {
protected:
    char str[30];
    int empId;
    char gender;

public:
    void getBasicInfo() {
        cout << "Enter Emp. Id: ";
        cin >> empId;
        cout << "Enter Gender: ";
        cin >> gender;
        cin.ignore();  // Ignore leftover newline before getline
        cout << "Enter Name: ";
        cin.getline(str, 30);
    }
};

// Base Class - deptInfo
class deptInfo {
protected:
    char deptName[30];
    char assignedWork[30];
    int time2complete;

public:
    void getDeptInfo() {
        cin.ignore();  // Ignore leftover newline before getline
        cout << "Enter Department Name: ";
        cin.getline(deptName, 30);
        cout << "Enter assigned work: ";
        cin.getline(assignedWork, 30);
        cout << "Enter time in hours to complete work: ";
        cin >> time2complete;
    }
};

// Final class (Derived Class) - employee
class employee : private basicInfo, private deptInfo {
public:
    void getEmployeeInfo() {
        cout << "Enter employee's basic info: " << endl;
        getBasicInfo();  // Call to getBasicInfo()
        cout << "Enter employee's department info: " << endl;
        getDeptInfo();   // Call to getDeptInfo()
    }

    void printEmployeeInfo() {
        cout << "Employee's Information is: " << endl;
        cout << "Basic Information...:" << endl;
        cout << "Name: " << str << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Gender: " << gender << endl << endl;
        cout << "Department Information...:" << endl;
        cout << "Department Name: " << deptName << endl;
        cout << "Assigned Work: " << assignedWork << endl;
        cout << "Time to complete work: " << time2complete << " hours" << endl;
    }
};

int main() {
    employee emp;  // Create object of class employee
    emp.getEmployeeInfo();
    emp.printEmployeeInfo();
    return 0;
}