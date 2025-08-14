#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// NON - TAIL RECURSIVE METHOD
int fibo(int n){
    if(n <= 1)  return n;
    return fibo(n-1) + fibo(n-2);
}

// TAIL RECURSIVE METHOD
int fiboTail(int n, int a = 0, int b = 1) {
    if (n == 0) return a;
    if (n == 1) return b;
    return fiboTail(n - 1, b, a + b); // Tail call
}


int main() {
    int n;
    cout << "Enter a Number : ";
    cin >> n;


    // NON - TAIL RECURSIVE METHOD
    cout << "NON - TAIL RECURSIVE METHOD : " << n << (n == 1 ? "-st" : n == 2 ? "-nd" : n == 3 ? "-rd" : "-th") << " Fibonacci Number : ";
    cout << fibo(n) << endl;

    // TAIL RECURSIVE METHOD
    cout << "TAIL RECURSIVE METHOD       : " << n << (n == 1 ? "-st" : n == 2 ? "-nd" : n == 3 ? "-rd" : "-th") << " Fibonacci Number : ";
    cout << fiboTail(n) << endl;

    return 0;
}

// VERSION            | TIME COMPLEXITY | SPACE (NO TCO) | SPACE (WITH - Tail Call Optimization) 
// -------------------|-----------------|----------------|-----------------
// Normal Recursive   | O(2^n)          | O(n)           | O(n)
// Tail Recursive     | O(n)            | O(n)           | O(1)