#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);

    cout << "Elements in unordered_set: ";
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    cout << endl << "Size of unordered_set: " << s.size() << endl;

    // find() - checking existence of an element - returns an iterator pointing to the found element
    int key = 20;
    if (s.find(key) != s.end()) {
        cout << endl << key << " found in unordered_set." << endl;
    } else {
        cout << endl << key << " not found in unordered_set." << endl;
    }

    // count() - (alternative to find) return 1/0 depends on the element is present or not
    cout << endl <<"Count of " << key << ": " << s.count(key) << endl;

    s.erase(30);
    cout << endl <<"After erasing 30, size: " << s.size() << endl;

    s.clear();
    cout << endl <<"After clear(), size: " << s.size() << endl;

    return 0;
}

//ALL THE OPERATIONS : O(1)