#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<string, int> m;

    // INSERT using [] and insert()
    m["Avinash"] = 10;
    m.insert({"banana", 20});
    m["cherry"] = 30;

    // ACCESS using [] and at()
    cout << endl << "Avinash: " << m["Avinash"] << endl;
    cout << "Banana: " << m.at("banana") << endl;

    // CHECK SIZE
    cout << endl << "Size: " << m.size() << endl;

    // CHECK IF EMPTY
    cout << endl << "Is Empty? " << (m.empty() ? "Yes" : "No") << endl;

    // COUNT (checks if element exists)
    cout << endl << "Is 'Avinash' in map? " << (m.count("Avinash") ? "Yes" : "No") << endl;

    // FIND
    auto it = m.find("cherry");
    if (it != m.end()) {
        cout << endl << "Found 'cherry' with value: " << it->second << endl;
    } else {
        cout << endl << "'cherry' not found" << endl;
    }

    // ERASE
    m.erase("banana");
    cout << endl << "After erasing 'banana', size: " << m.size() << endl;

    // ITERATE USING begin() and end()
    cout << endl << "Map contents:" << endl;
    for (auto it = m.begin(); it != m.end(); it++) {
        cout << it->first << " -> " << it->second << endl;
    }

    return 0;
}
