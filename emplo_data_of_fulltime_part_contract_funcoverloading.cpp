#include<iostream>
#include<string>
using namespace std;

struct fulltime_employee {
    string name;
    int employeeID;
    int salary;
    string position;
};

struct parttime_employee {
    string name;
    int employeeID;
    int salary;
    int hours;
    string position;
};

struct contracttime_employee {
    string name;
    int employeeID;
    int salary;
    int months;
    string position;
};

void adding_New_Employee(fulltime_employee employee) {
    cout << "ADDING NEW EMPLOYEE = " << employee.name << endl;
    cout << "generate new ID = " << employee.employeeID << endl;
    cout << "salary = " << employee.salary << endl;
    cout << "which position in a company = " << employee.position << endl;
}

void adding_New_Employee(parttime_employee employee) {
    cout << "ADDING NEW EMPLOYEE = " << employee.name << endl;
    cout << "GENERATE NEW ID = " << employee.employeeID << endl;
    cout << "SALARY = " << employee.salary << endl;
    cout << "HOW MUCH HOURS THEY WORK IN A WEEK = " << employee.hours << endl;
    cout << "AT WHICH POSITION AT A COMPANY = " << employee.position << endl;
}

void adding_New_Employee(contracttime_employee employee) {
    cout << "ADDING NEW EMPLOYEE = " << employee.name << endl;
    cout << "GENERATE NEW ID = " << employee.employeeID << endl;
    cout << "SALARY = " << employee.salary << endl;
    cout << "HOW MUCH MONTHS THEY WORK IN A YEAR = " << employee.months << endl;
    cout << "AT WHICH POSITION AT A COMPANY = " << employee.position << endl;
}

void updating_Employee(fulltime_employee& employee) {
    while (true) {
        cout << "Enter the field you want to update:\n";
        cout << "1. Name\n2. Employee ID\n3. Salary\n4. Position\n5. Exit\n";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the new name: ";
                cin >> employee.name;
                break;
            case 2:
                cout << "Enter the new employee ID: ";
                cin >> employee.employeeID;
                break;
            case 3:
                cout << "Enter the new salary: ";
                cin >> employee.salary;
                break;
            case 4:
                cout << "Enter the new position: ";
                cin >> employee.position;
                break;
            case 5:
                cout << "Exiting update process.\n";
                return;
            default:
                cout << "Invalid choice. Please enter a number from 1 to 5.\n";
        }
    }
}

// Implementation for updating full-time employee details

void updating_Employee(parttime_employee& employee) {
    while (true) {
        cout << "Enter the field you want to update:\n";
        cout << "1. Name\n2. Employee ID\n3. Salary\n4. Hours\n5. Position\n6. Exit\n";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the new name: ";
                cin >> employee.name;
                break;
            case 2:
                cout << "Enter the new employee ID: ";
                cin >> employee.employeeID;
                break;
            case 3:
                cout << "Enter the new salary: ";
                cin >> employee.salary;
                break;
            case 4:
                cout << "Enter the new hours: ";
                cin >> employee.hours;
                break;
            case 5:
                cout << "Enter the new position: ";
                cin >> employee.position;
                break;
            case 6:
                cout << "Exiting update process.\n";
                return;
            default:
                cout << "Invalid choice. Please enter a number from 1 to 6.\n";
        }
    }
}

// Implementation for updating part-time employee details

void updating_Employee(contracttime_employee& employee) {
    while (true) {
        cout << "Enter the field you want to update:\n";
        cout << "1. Name\n2. Employee ID\n3. Salary\n4. Months\n5. Position\n6. Exit\n";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the new name: ";
                cin >> employee.name;
                break;
            case 2:
                cout << "Enter the new employee ID: ";
                cin >> employee.employeeID;
                break;
            case 3:
                cout << "Enter the new salary: ";
                cin >> employee.salary;
                break;
            case 4:
                cout << "Enter the new months: ";
                cin >> employee.months;
                break;
            case 5:
                cout << "Enter the new position: ";
                cin >> employee.position;
                break;
            case 6:
                cout << "Exiting update process.\n";
                return;
            default:
                cout << "Invalid choice. Please enter a number from 1 to 6.\n";
        }
    }
}

// Implementation for updating contract-time employee details

    // Implementation for updating contract-time employee details


void deleting_employee(fulltime_employee employee) {
    cout << "\nEnter employee ID for deletion: ";
    int employeeID = 100;
    

    if (employee.employeeID == employeeID) {
        cout << "Employee found and deleted." << endl;
    } else {
        cout << "Employee not found." << endl;
    }
}

void deleting_employee(parttime_employee employee) {
    cout << "\nEnter employee ID for deletion: ";
    int employeeID = 200;
    

    if (employee.employeeID == employeeID) {
        cout << "Employee found and deleted." << endl;
    } else {
        cout << "Employee not found." << endl;
    }
}

void deleting_employee(contracttime_employee employee) {
    cout << "\nEnter employee ID for deletion: ";
    int employeeID = 300;
    

    if (employee.employeeID == employeeID) {
        cout << "Employee found and deleted." << endl;
    } else {
        cout << "Employee not found." << endl;
    }
}

int main() {
    // Example usage of functions
    fulltime_employee ftEmployee;
    cout << "Enter full-time employee details:" << endl;
    cout << "Name: ";
    cin >> ftEmployee.name;
    cout << "Employee ID: ";
    cin >> ftEmployee.employeeID;
    cout << "Salary: ";
    cin >> ftEmployee.salary;
    cout << "Position: ";
    cin >> ftEmployee.position;

    parttime_employee ptEmployee;
    cout << "Enter part-time employee details:" << endl;
    cout << "Name: ";
    cin >> ptEmployee.name;
    cout << "Employee ID: ";
    cin >> ptEmployee.employeeID;
    cout << "Salary: ";
    cin >> ptEmployee.salary;
    cout << "Hours worked: ";
    cin >> ptEmployee.hours;
    cout << "Position: ";
    cin >> ptEmployee.position;

    contracttime_employee ctEmployee;
    cout << "Enter contract-time employee details:" << endl;
    cout << "Name: ";
    cin >> ctEmployee.name;
    cout << "Employee ID: ";
    cin >> ctEmployee.employeeID;
    cout << "Salary: ";
    cin >> ctEmployee.salary;
    cout << "Months worked: ";
    cin >> ctEmployee.months;
    cout << "Position: ";
    cin >> ctEmployee.position;

    adding_New_Employee(ftEmployee);
    adding_New_Employee(ptEmployee);
    adding_New_Employee(ctEmployee);

    updating_Employee(ftEmployee);
    updating_Employee(ptEmployee);
    updating_Employee(ctEmployee);

    deleting_employee(ftEmployee);
    deleting_employee(ptEmployee);
    deleting_employee(ctEmployee);

    return 0;
}
