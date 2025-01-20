#include<iostream>
using namespace std;

int main(){
    int n=5;
    int arr[5] = {4, 1, 5, 2, 3};
    for(int i=0; i<n; i++){
        for(int y=0; y<n; )
        if(arr[i] > arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1]=temp;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }

}