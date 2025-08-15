#include <iostream>
#include <algorithm>
using namespace std;


int ropeCutting(int n, int a, int b, int c) {
    if (n == 0)    return 0;
    if (n < 0)     return -1;

    int res = max({ropeCutting(n - a, a, b, c), ropeCutting(n - b, a, b, c), ropeCutting(n - c, a, b, c)});

    if (res == -1)  return -1;
    return res + 1;
}


int main() {
    int n;
    cout << "Enter the Length of rope: ";
    cin >> n;

    int a, b, c;
    cout << "Enter the three possible cut lengths: ";
    cin >> a >> b >> c;

    int result = ropeCutting(n, a, b, c);

    if (result == -1)   cout << "The rope cannot be cut into pieces of the given lengths." << endl;
    else                cout << "Maximum number of pieces: " << result << endl;

    return 0;
}

// TIME  COMPLEXITY : O(3^n)
// SPACE COMPLEXITY : O(n), maximum depth of the recursion stack, which is proportional to n.