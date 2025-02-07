#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//IN  - 5, 2, 6, 1, 1, 1, 1, 4
//OUT - TRUE
 
bool threeEqualSubsetsPartitionProblem(int n, int arr[]){

    int total_sum = 0;
    for(int i = 0; i < n ; i++){
        total_sum += arr[i];
    }

    int range=0;
    int sum = 0;
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
        if(sum == total_sum/3){
            sum = 0;
            count++;
            cout << range << " -> " << i << endl;
            range = i+1;
        }
    }

    if(count == 3)    return true;
    else false;

}


int main() {
    // int n = 12;
    // int arr[12] = {1, 1, 1, 1, 1, 1, 1, 7, 1, 1, 1, 4};

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }

    int check = threeEqualSubsetsPartitionProblem(n, arr);
    if (check) cout << "TRUE";
    else cout << "FALSE";
    return 0;
}