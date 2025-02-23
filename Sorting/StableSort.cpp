#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct Data {
    string name;
    int value;
};

void printArray(const vector<Data>& arr) {
    cout << "{";
    for (size_t i = 0; i < arr.size(); ++i) {
        cout << "(\"" << arr[i].name << "\", " << arr[i].value << ")";
        if (i < arr.size() - 1) {
            cout << ", ";
        }
    }
    cout << "}" << endl;
}

vector<Data> stableSort(vector<Data> arr) {
    stable_sort(arr.begin(), arr.end(), [](const Data& a, const Data& b) {
        return a.value < b.value;
    });
    return arr;
}

vector<Data> unstableSort(vector<Data> arr) {
    sort(arr.begin(), arr.end(), [](const Data& a, const Data& b) {
        return a.value < b.value;
    });
    return arr;
}

int main() {
    vector<Data> arr = {
        {"Anil", 50},
        {"Ayan", 80},
        {"Piyush", 50},
        {"Ramesh", 80}
    };

    cout << endl << "Original Array: ";
    printArray(arr);

    vector<Data> stableSortedArr = stableSort(arr);
    cout << endl << "Stable Sorted Array: ";
    printArray(stableSortedArr);
    cout << endl << "REASON : In this output, 'Anil' still comes before 'Piyush', and 'Ayan' still comes before 'Ramesh'\n" <<
    "         The relative order of elements with equal keys is maintained, making this a stable sort." << endl;

    vector<Data> unstableSortedArr = unstableSort(arr);
    cout << endl << "Unstable Sorted Array: ";
    printArray(unstableSortedArr);
    cout << endl << "REASON : Here, 'Piyush' comes before 'Anil' even though 'Anil' was originally before 'Piyush' in the input.\n" <<
    "         This change in the relative order of elements with equal keys makes this an unstable sort." << endl; 

    return 0;
}