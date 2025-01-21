#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


int removeDuplicate(int arr[], int n){
    int res=1;
    for(int i=1; i < n; i++){
        if(arr[res-1] != arr[i]){
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}


int main() {
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int arr[n];

    for(int i=0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n); 
    
    //sorted array
    cout<<"Sorted Array"<<endl;
    for(int i=0; i < n; i++){
        cout << arr[i] << "  ";
    }

    int updated_size=removeDuplicate(arr, n);
    
    cout<<"\nArray after Removing all Duplicates: "<<endl;
    for(int i=0; i < updated_size; i++){
        cout << arr[i] << "  ";
    }
    return 0;
}

//OPTIMIZED APPROACH
//TIME COMPLEXITY - O(n)
//SPACE COMPLEXITY - O(1)