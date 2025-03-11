
#include <iostream>
using namespace std;

#define MAX 1000 

class DirectAddressTable {
private:
    bool table[MAX];

public:
    DirectAddressTable() {
        for (int i = 0; i < MAX; i++)
            table[i] = false; 
    }
    
    void insert(int key) {  //insert key
        if (key >= 0 && key < MAX)
            table[key] = true;
        else
            cout << "Key out of range!\n";
    }
    
    
    void remove(int key) {  //delete key
        if (key >= 0 && key < MAX)
            table[key] = false;
        else
            cout << "Key out of range!\n";
    }
    

    bool search(int key) {    //search key
        if (key >= 0 && key < MAX)
            return table[key];
        else {
            cout << "Key out of range!\n";
            return false;
        }
    }
};

int main() {
    DirectAddressTable dat;
    
    dat.insert(10);
    dat.insert(20);
    dat.insert(119);
    
    cout << "Search 10: " << (dat.search(10) ? "Found" : "Not Found") << endl;
    cout << "Search 20: " << (dat.search(20) ? "Found" : "Not Found") << endl;
    cout << "Search 119: " << (dat.search(119) ? "Found" : "Not Found") << endl;
    cout << "Search 50: " << (dat.search(50) ? "Found" : "Not Found") << endl;
    
    dat.remove(119);
    cout << "Search 119 after deletion: " << (dat.search(119) ? "Found" : "Not Found") << endl;
    
    return 0;
}

// TIME COMPLEXITY - O(1)