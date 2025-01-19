#include<iostream>
using namespace std;


int main()
{
    int n = 8;
    int arr[8] = {7, 8, 19, 99, 99, 199, 56, 11};
    int largest=0;
    int seclargest=-1;

    for(int i=1; i<n; i++){
        if(arr[i]>arr[largest]){
            seclargest=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest]){
            if(seclargest == -1 || arr[i] > arr[seclargest]){
                seclargest=i; 
            }
        }
    }




    cout << "Largest Element: " << arr[largest] << "\nIndex of Largest Element: " << largest << endl;
    cout << "Second Largest Element: " << arr[seclargest] << "\nIndex of Second Largest Element: " << seclargest;

    return 0;
}