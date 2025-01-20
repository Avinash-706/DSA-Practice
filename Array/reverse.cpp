#include<iostream>
using namespace std;

int main(){
    int n=5;
    int arr[5]={1,2,5,3,4};
    int x=n;
    for(int i=0; i<n/2; i++){
        int temp=arr[i];
        arr[i]=arr[x-1];
        arr[x-1]=temp;
        x--;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
}

