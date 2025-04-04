#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

int partition(int arr[], int l, int h)
{   
    int pivot=arr[l];
    int i=l-1,j=h+1;
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j)return j;
        swap(arr[i],arr[j]);
    }
}

void qSort(int arr[],int l,int h){
    Begin:
    if(l<h){
        int p=partition(arr,l,h);
        qSort(arr,l,p);
        l=p+1;
        goto Begin;
    }
}
 
int main() {
    int n = 7;	
    int arr[7]={8,4,7,9,3,10,5};
    
    // int n;
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // int arr[n];
    // cout << "Enter the elements: ";
    // for(int i=0; i < n; i++){
    //     int input;
    //     cin >> input;
    //     arr[i] = input;
    // }

	
	qSort(arr,0,n-1);
	
	for(int x: arr)
	    cout<<x<<" ";
}