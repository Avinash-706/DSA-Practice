#include<iostream>
using namespace std;

void insert(int arr[], int cap, int x, int usage, int pos){
    for(int i=cap-1; i>=pos-1; i--){
        arr[i]=arr[i-1]; //Shifting the ARRAY from the positiion by 1
    }
    arr[pos-1]=x;
}

int main(){
    int arr[5]={10,20,30,40};
    int cap = sizeof(arr)/sizeof(arr[0]); //CAPACITY of ARRAY(SIZE OF ARRAY)

    int usage=0;
    for(int i = 0; i < cap; i++) {
        if(arr[i] != 0) usage++; //USAGE-->FOR CHECKING THE SPACE USED IN THE ARRAY
    }

    cout << "CAPACITY: " << cap << "\n USAGE:" << usage << endl;
    if(cap>usage){
        int x, pos;
        cout<<"Element to enter & position: "<<endl;
        cin >> x >> pos;
        
        insert(arr, cap, x, usage ,pos);

        for(int i=0; i<cap; i++){
            cout<<arr[i]<<"  "; //PRINTING THE UPDATED ARRAY.
        }
    }
}

