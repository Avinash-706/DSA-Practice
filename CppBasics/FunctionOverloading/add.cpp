#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

char add(char a, char b) {
    return a + b;
}

int main() 
{
    cout << "Sum of 5 and 10 (int): " << add(5, 10) << endl;

    cout << "Sum of 5.5 and 10.1 (double): "<< add(5.5, 10.1) << endl;

    cout << "Sum of 'A' and 'B' (char, ASCII): " << (int)add('A', 'B') << endl;


  }