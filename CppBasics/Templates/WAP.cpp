#include <iostream>
using namespace std;

//1. WAP max value of two numbers
//2. Swapping of two numbers
//3. array sum
//4. overloading using template
//5. concatenation of two strings using template.

// Template to find the maximum of two numbers
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

// Template to swap two numbers
template <typename T>
void swapNumbers(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

// Template to calculate sum of an array
template <typename T>
T arraySum(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Template to concatenate two strings
template <typename T>
T concatenate(T a, T b) {
    return a + b;
}


int main() {
    //MAX OF TWO NUMBERS
    int x = 10, y = 20;
    cout << "Max of " << x << " and " << y << " is: " << findMax(x, y) << endl;

    //SWAPPING TWO NUMBERS
    double a = 5.5, b = 10.1;
    cout << "Before Swap: a = " << a << ", b = " << b << endl;
    swapNumbers(a, b);
    cout << "After Swap: a = " << a << ", b = " << b << endl;

    //ARRAY SUM
    int arr[] = {1, 2, 3, 4, 5};
    cout << "Sum of array: " << arraySum(arr, 5) << endl;

    // CONCATENATION OF TWO STRINGS
    string str1 = "Hello, ", str2 = "World!";
    cout << "Concatenated String: " << concatenate(str1, str2) << endl;

    return 0;
}
