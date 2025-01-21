#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int arr[n];

    for(int i=0 ; i < n ; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n); 

    for(int i=0; i < n; i++){
        cout << arr[i] << "  ";
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                cout<<arr[i];
            }
        }
    }

    return 0;
}
    //33- 204 cabin 17
