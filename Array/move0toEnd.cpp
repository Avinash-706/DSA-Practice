#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int moveZero(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            for(int j=i+1; j<n ; j++){
                if(arr[j] != 0){
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
}

int main() {
    int n=6;
    int arr[6]={10, 0, 20, 0, 0, 50};
    // int n;
    // cin>>n;
    // int arr[n];
    // cout<<"Enter the size of the array: ";
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }

    moveZero(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << "  ";
    }
    return 0;
}