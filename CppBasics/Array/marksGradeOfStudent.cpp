#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
using namespace std;

void studentMarks(int n, int marks[], char grade[]){
   
    cout << "Enter the marks & grade of each student: " << endl;
    for(int i=0; i < n; i++){
        cin >> marks[i];
        cin >> grade[i];
    }
    cout << "\n Marks of each student are :" << endl;
    for(int i=0; i < n; i++){
        cout << "Student " << i+1 << " : Marks -> " << marks[i] << " & Grade -> " << grade[i] <<endl;
    }
}

int main() {
    int n;
    int marks[50];
    char grade[50];
    cout << "Enter the number of students (Max 50): ";
    cin >> n;
    if(n <= 50) studentMarks(n, marks, grade);
    else cout<<" -- Invalid Input Size --";
    return 0;
}