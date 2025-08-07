#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


// IN INCREASING ORDER
void generateNumber(int arr[], int n, int count){\
    queue<string> q;
    for(int i = 0 ; i < n; i++){
        q.push(to_string(arr[i]));
    }
    cout << "Generated Numbers : ";
    for(int i = 0 ; i < count ; i++){
        string x = q.front();
        cout << x << " ";
        q.pop();
        for(int j = 0 ; j < n ; j++){
            string num = x + to_string(arr[j]);
            q.push(num);
        }
    }
}


int main() {
    // SAMPLE INPUT 1:
    int n = 2;
    int arr[n] = {5, 6};
    int count  = 10;
    // output : 5 6 55 56 65 66 555 556 565 566

    // // FOR USER :
    // int n;
    // cout << "\nEnter the Number of Elements : ";
    // cin >> n;
    // int arr[n];

    // cout << "Enter the corresponding digits you want to add : ";
    // for(int i = 0 ; i < n; i++){
    //     cin >> arr[i];
    // }

    // sort(arr, arr+n);
    // int count;
    // cout << "Enter the number of digits you want to generate : ";
    // cin >> count;


    generateNumber(arr, n, count);
    return 0;
}

// TIME  COMPLEXITY  : O(k × log(k)), where k is the count of number we want to generate
// SPACE COMPLEXITY  : O(k × log(k)), where k is the count of number we want to generate