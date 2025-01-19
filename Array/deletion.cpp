#include<iostream>
using namespace std;


int deletion(int arr[], int &n, int x){
    int i;
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            break;
        }
    }
    if(i==n){
        cout<<"\n-- No such element --";
        return n;
    }
    for(int j=i; i<n-1; i++){
        arr[j]=arr[j+1];
    }
    cout<<"\n-- Element is Deleted -- ";
    n=n-1;
    return n;
}


int main(){
    int n,x;
    cout<<"Size of the Array: ";
    cin>>n;
    int arr[n];
    cout<<"\n Enter the elements: ";
    for(int i=0; i<n; i++){
        int y;
        cin>>y;
        arr[i]=y;
    }
    cout<<"\nElement to be deleted : ";
    cin>>x;
    cout<<"\nUpdated Size of the array is: "<<deletion(arr, n, x)<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
}


//Time Complexity
// Best Case: Ω(1)
// Worst Case: O(n)
// Average Case: O(n)