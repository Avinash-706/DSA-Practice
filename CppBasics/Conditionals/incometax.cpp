#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter the Income: ";
    cin >> n;
    int amount = 0;

    if (n <= 750000) {
        cout << "NO TAX" << endl;
    } else {
        if (n > 750000 && n <= 1000000) {
            int x = n - 750000;
            amount += x * 0.10;  // 10% tax
        }
        
        else if (n > 1000000 && n <= 2000000) {
            amount += 25000; 
            int x = n - 1000000;
            amount += x * 0.20; // 20% tax
        }
        
        else if (n > 2000000) {
            amount += 25000; 
            amount += 200000; 
            int x = n - 2000000;
            amount += x * 0.30; // 30% tax
        }
        cout << "Tax Amount: " << amount << endl;
        cout << "Effective Tax Rate : " << fixed << setprecision(2) << (float(n) / amount) << "%" << endl;
    }
    
    
}
