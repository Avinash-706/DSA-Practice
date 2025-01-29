#include <iostream>
#include <limits>

using namespace std;

class student_class
{
private:
    string name;
    float marks[5], total, perc, fine;
    int roll;
    char grade;

public:
    student_class()
    {
        cout << "CONSTRUCTOR CALLED" << endl;
        fine = 0;
        total = 0;
        perc = 0;
    }

    ~student_class()
    {
        cout << "DESTRUCTOR CALLED" << endl;
    }

    void input()
    {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nEnter Name - ";
        getline(cin, name);
        cout << "Enter Roll - ";
        cin >> roll;
        cout << "Enter Marks of all 5 subjects - ";
        for (int i = 0; i < 5; i++)
            cin >> marks[i];
    }

    void display()
    {
        cout << "\n----- Student Details -----\n";
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << perc << "%" << endl;
        cout << "Grade: " << grade << endl;
        cout << "Fine: " << fine << " Rs\n";
    }

    int fineCalculator()
    {
        int totalFine = (grade == 'F') ? 5000 : 0;
        for (int i = 0; i < 5; i++)
            if (marks[i] < 50)
                totalFine += 500;

        return totalFine;
    }

    void calculate()
    {
        total = 0;
        for (int i = 0; i < 5; i++)
            total += marks[i];

        perc = total / 5;
        grade = (perc > 50) ? 'P' : 'F';
        fine = fineCalculator();
    }

    float getPercentage()
    {
        return perc;
    }
};

int topper(student_class s[], int n)
{
    int index = 0;
    float maxPerc = s[0].getPercentage();
    for (int i = 1; i < n; i++)
    {
        if (s[i].getPercentage() > maxPerc)
        {
            maxPerc = s[i].getPercentage();
            index = i;
        }
    }
    return index;
}

int main()
{
    cout << "SIZE OF CLASS: " << sizeof(student_class) << " bytes\n";

    const int MAX_STUDENTS = 5;

    int n;
    student_class s[5];  // **Fixed-size array (No VLAs)**
    cout << "Enter number of students (max 5): ";
    cin >> n;

    // Input student details
    for (int i = 0; i < n; i++)
    {
        s[i].input();
        s[i].calculate();
    }

    // Display all students' details
    for (int i = 0; i < n; i++)
        s[i].display();

    // Display topper's details
    cout << "\n---- DETAILS OF THE TOPPER STUDENT ----\n";
    s[topper(s, n)].display();

    return 0;
}
