#include <iostream>
#include <limits>
using namespace std;

class student_class
{
    public:
    string name;
    float marks[5], total=0, perc=0, fine=0;
    int roll;
    char grade;
    void input()
    {   
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"\nEnter Name - ";
        getline(cin, name);
        cout<<"\nEnter Roll - ";
        cin >> roll;
        cout<<"\nEnter Marks of all 5 subjects - ";
        for(int i = 0; i < 5; i++) cin >> marks[i];
    }
};

// class student_class
// {
//     public:
//     string name;
//     float marks[5], total=0, perc=0, fine=0;
//     int roll;
//     char grade;
// };

void input(student_class &s)
{   
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout<<"\nEnter Name - ";
    getline(cin, s.name);
    cout<<"\nEnter Roll - ";
    cin >> s.roll;
    cout<<"\nEnter Marks of all 5 subjects - ";
    for(int i = 0; i < 5; i++) cin >> s.marks[i];
}

void display(student_class &s)
{   
    cout << "\n----- Student Details -----\n";
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Total Marks: " << s.total << endl;
    cout << "Percentage: " << s.perc << "%" << endl;
    cout << "Grade: " << s.grade << endl;
    cout << "Fine: " << s.fine << " Rs\n";
}

int fineCalculator(student_class &s)
{
    int totalFine = 0;
    if (s.grade == 'F') totalFine += 5000;
    
    for (int i = 0; i < 5; i++)  
        if (s.marks[i] < 50)  
            totalFine += 500;

    return totalFine;
}

void calculate(student_class &s)
{
    s.total = 0;
    for(int i = 0; i < 5; i++) 
        s.total += s.marks[i];

    s.perc = s.total / 5;
    s.grade = (s.perc > 50) ? 'P' : 'F';
    
    s.fine = fineCalculator(s);
}

int topper(student_class s[], int n)
{
    float max = s[0].perc;
    int index = 0;
    for(int i = 1; i < n; i++)
    {
        if(s[i].perc > max)
        {
            max = s[i].perc;
            index = i;
        }
    }
    return index;
}

int main()
{   
    cout<<"SIZE OF CLASS : "<<sizeof(student_class)<<endl;
    int n;
    cout << "Enter number of students (max 5): ";
    cin >> n;
    student_class s[n];
    
    for (int i = 0; i < n; i++)
    {
        input(s[i]);
        calculate(s[i]);
    }
    
    for (int i = 0; i < n; i++)
        display(s[i]);

    cout << "\n---- DETAILS OF THE TOPPER STUDENT ----\n";
    display(s[topper(s, n)]);

    return 0;
}
