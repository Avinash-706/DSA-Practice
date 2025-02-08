#include <iostream>
#include <map>
using namespace std;

//OPTIMIZED APPROACH
void compute(int n, int left[], int right[]) {
    int count[101]={0};

    for (int i = 0; i < n; i++) {
        count[left[i]]++;    
        count[right[i] + 1]--; 
    }

    int result = 0, maxValue = 0;

    for (int i=1; i < 100; i++) { 
        count[i] = count[i] + count[i - 1]; 
        if (count[i] > count[result]) {
            result = i;
            maxValue = i;
        }
    }

    cout << "The Element with Maximum Frequency: " << maxValue <<" | Frequecy : "<< count[result];
}

int main() {
    // int n = 4;
    // int left[]  = {1, 2, 5, 15};
    // int right[] = {5, 8, 7, 18};

    int n;
    cout << "\nEnter the size of the array: ";
    cin >> n;
    int left[n], right[n];
    for(int i=0; i < n; i++){
        int l_input, r_input;
        cout << "  Enter The Left and Right Range ( Note : Range Must be in Increasing Order ): ";
        cin >> l_input >> r_input;
        left[i] = l_input;
        right[i] = r_input;
    }

    compute(n, left, right);
    return 0;
}

// TIME COMPLEXITY: O(n + MAX), 'n' is the number of ranges, 'MAX' is the maximum number of elements in any range 
// AUXILIARY SPACE: O(MAX), 'MAX' is the maximum number of elements in any range.