#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int n=6;
    cout << "Enter the size of the array: " << endl;
    // cin >> n;
    int arr[6]={10,20,50,10,20,70};

    // for(int i=0 ; i < n ; i++){
    //     cin >> arr[i];
    // }
    sort(arr, arr+n); 
    
    //sorted array
    for(int i=0; i < n; i++){
        cout << arr[i] << "  ";
    }

    //Duplicate Check
    cout<<"Duplicate Check";
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<"   ";
            }
        }
    }

    return 0;
}
    //33- 204 cabin 17
