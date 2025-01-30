#include <iostream>
using namespace std;

class student {
    string name;
    int roll;
    float total, perc;

public:
    // Copy Constructor
    student(const student &obj) {
        cout << endl << "COPY CONSTRUCTOR CALLED" << endl;
        name = obj.name;
        roll = obj.roll;
        total = obj.total;
        perc = obj.perc; // Ensure percentage is also copied
        display();
    }

    // Default Constructor
    student() {
        cout << endl << "DEFAULT CONSTRUCTOR CALLED" << endl;
    }

    // Parameterized Constructor
    student(string name1, int roll1, float total1) {
        cout << "PARAMETERIZED CONSTRUCTOR CALLED" << endl;
        name = name1;
        roll = roll1;
        total = total1;
        calculate();
    }

    // Destructor
    ~student() {
        cout << endl << "Destructor called" << endl;
    }

    void calculate() {
        perc = total / 5;
        display();
    }

    void display() {
        cout << "\nDetails:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << perc << "%" << endl;
    }
};

int main() {
    student s("Avinash", 45, 400); // Calls parameterized constructor
    cout << "\nWelcome to OOPS\n" << endl;
    
    student s1 = s; // Calls the COPY CONSTRUCTOR (Correct way)
    
    return 0;
}
