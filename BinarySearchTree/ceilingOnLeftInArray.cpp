#include <iostream>
#include <set>
using namespace std;


void printCeiling(int arr[], int n)
{
    set<int> s;

    cout << "-1" << " ";
    s.insert(arr[0]);

    for(int i = 1; i < n; i++)
    {
        auto it = s.lower_bound(arr[i]);

        if(it != s.end())
            cout << *it << " ";
        else
            cout << "-1" << " ";

        s.insert(arr[i]);
    }
}

int main()
{
    int arr[] = {2, 8, 30, 15, 25, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Ceiling on the Left In Array : ";
    printCeiling(arr, n);

    return 0;
}

// TIME  COMPLEXITY  : O(n log n), where 'n' is the size of the array  
// SPACE COMPLEXITY : O(n)  