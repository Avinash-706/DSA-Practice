#include <iostream>
using namespace std;

auto add(auto a, auto b) {
    return a + b;
}

int main() 
{
    cout << "Sum of 5 and 10 (int): " << add(5, 10) << endl;
    cout << "Sum of 5.5 and 10.1 (double): " << add(5.5, 10.1) << endl;
    cout << "Sum of 'A' and 'B' (char, ASCII): " << (int)add('A', 'B') << endl;

    return 0;
}
