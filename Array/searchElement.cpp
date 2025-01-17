#include <iostream>
using namespace std;

int search (int arr[], int n, int x){
    for(int i=0; i<n ; i++){
        if(arr[i]==x){
            return 1;
        }
    }
    return -1;

}

int main(){
    int n=4;
    int x;
    int arr[n]={20,10,80,29};
    cin>>x;
    cout<<search(arr, n, x)<<endl;
}