#include <iostream>
using namespace std;

int largestElement(int arr[], int n, int &lar ,int &indexoflar){
    for (int i = 0; i < n; i++){ // starting from the first element..
        if (arr[i] > lar){
            lar = arr[i];
            indexoflar = i;
        }
    }
}

int secondLargestElement(int arr[], int n, int &lar, int &indexoflar){
    int indexofsec=-1;
    for(int i=0; i<n; i++){
        if(arr[i]!=arr[indexoflar]){
            if(indexofsec==-1){
                indexofsec=i;
            }
            else if(arr[i]>arr[indexofsec]){
                indexofsec=i; 
            }
        }
    }
    return indexofsec;
}


int main()
{
    int n = 8;
    int arr[8] = {7, 8, 19, 99, 99, 199, 56, 11};
    int lar = arr[0];
    int indexoflar = 0;
    largestElement(arr, n, lar, indexoflar);
    int x = secondLargestElement(arr, n, lar, indexoflar);

    cout << "Largest Element: " << lar << "\nIndex of Largest Element: " << indexoflar << endl;
    cout << "Second Largest Element: " << arr[x] << "\nIndex of Second Largest Element: " << x;

    return 0;
}
// TIME COMPLEXITY : O(n)
