#include<iostream>
using namespace std;


int main(){
    int n=8;
    int arr[8]={7, 8 , 19 , 20 , 99 , 199, 56, 11};
    int lar=arr[0];
    int indexoflar=0;
    for(int i=1; i<n; i++){ //starting from the second element..
        if(arr[i+1]>lar){
            lar=arr[i+1];
            indexoflar=i;
        }
    }
    cout<<"Largest Element: "<<lar<<"\nIndex of Largest Element: "<<indexoflar;
    return 0;
}

//TIME COMPLEXITY : O(n)

