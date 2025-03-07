#include <bits/stdc++.h>
using namespace std;

class DSU {
    vector<int> parent;
public:
    DSU(int n) {
        parent.resize(n, -1);
    }
    
    int find(int x) {
        if (parent[x] < 0)
            return x;
        return parent[x] = find(parent[x]);
    }
    
    void unite(int x, int y) {
        int parentX = find(x);
        int parentY = find(y);

        if (parentX == parentY)
            return;

        if (parent[parentX] <= parent[parentY]) {
            parent[parentX] += parent[parentY];
            parent[parentY] = parentX;
        } else {
            parent[parentY] += parent[parentX];
            parent[parentX] = parentY;
        }
    }
    
    bool isSameSet(int i, int j) {
        return find(i) == find(j);
    }
    
    void printParents() {  
        cout << "Parent array: ";
        for (int i = 0; i < parent.size(); i++) {
            cout << find(i) << " ";  
        }
        cout << endl;
    }
};

int main() {
    DSU d1(9); 
    
    d1.unite(0, 1);
    d1.unite(1, 2);
    d1.unite(2, 3);
    d1.unite(3, 4);
    d1.unite(4, 5);
    d1.unite(5, 6);
    d1.unite(6, 7);
    d1.unite(7, 8);

    d1.printParents(); 
    cout << "Are 0 and 8 in the same set? " << (d1.isSameSet(0, 8) ? "Yes" : "No") << endl;

    return 0;
}
