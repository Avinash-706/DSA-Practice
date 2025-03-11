
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
    
    // Insert a key
    void insert(int key) {
        if (key >= 0 && key < MAX)
            table[key] = true;
        else
            cout << "Key out of range!\n";
    }
    
    // Delete a key
    void remove(int key) {
        if (key >= 0 && key < MAX)
            table[key] = false;
        else
            cout << "Key out of range!\n";
    }
    
    // Search for a key
    bool search(int key) {
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