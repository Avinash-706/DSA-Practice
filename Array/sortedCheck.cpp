#include<iostream>
using namespace std;

bool issorted(int arr[], int n){
    for(int i=0; i<n-1; i++){ 
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int n=5;
    int arr[5]={10,20,37,40,155};
    bool check=issorted(arr, n);
    cout << check;
}
r

//TIME COMPLEXITY - O(n)