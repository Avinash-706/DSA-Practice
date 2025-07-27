//OPTIMIZED - VERSION  using DoublyLinked-List, and HashMap
//LINK TO UNOPTIMIZED IMPLEMENTATION : file:///D:/DSA-Practice/Array/LRUCacheDesign_UNOPTIMIZED.cpp
#include <iostream>
#include <unordered_map>
using namespace std;

// Doubly Linked List Node
struct Node {
    int value;
    Node* prev;
    Node* next;
    Node(int val) : value(val), prev(nullptr), next(nullptr) {}
};

// LRU Cache Class
class LRUCache {
private:
    int capacity;
    unordered_map<int, Node*> cache;
    Node* head;
    Node* tail;

    void remove(Node* node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    void insertAtFront(Node* node) {
        node->next = head->next;
        node->prev = head;
        head->next->prev = node;
        head->next = node;
    }

public:
    // Constructor
    LRUCache(int cap) {
        capacity = cap;
        head = new Node(-1); // dummy head
        tail = new Node(-1); // dummy tail
        head->next = tail;
        tail->prev = head;
    }

    void access(int val) {
        if (cache.find(val) != cache.end()) {
            // HIT
            Node* node = cache[val];
            remove(node);
            insertAtFront(node);
            cout << val << " - hit  : ";
        } else {
            // MISS
            if (cache.size() == capacity) {
                Node* lru = tail->prev;
                cache.erase(lru->value);
                remove(lru);
                delete lru;
            }
            Node* newNode = new Node(val);
            insertAtFront(newNode);
            cache[val] = newNode;
            cout << val << " - miss : ";
        }

        printCache();
    }

    void printCache() {
        Node* curr = head->next;
        while (curr != tail) {
            cout << curr->value << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};

void lruCache(int arr[], int n) {
    LRUCache lru(4); // fixed cache size = 4
    for (int i = 0; i < n; ++i) {
        lru.access(arr[i]);
    }
}

// Main Function
int main() {
    int sequence[10] = {10, 20, 10, 30, 40, 50, 30 , 40, 60, 30};
    lruCache(sequence, sizeof(sequence) / sizeof(sequence[0]));
    return 0;
}


// COMPLEXITIES   | TIME COMPLEXITY   | SPACE COMPLEXITY
// OVERALL CODE   :    O(k)           |     O(n)
// LRU_CACHE()    :    O(k)           |     O(n)
// MISS()         :    O(1)           |     O(1)
// HIT()          :    O(1)           |     O(1)
// where, n  ->  size of the LRU cache (capacity),  
//        k  ->  size of the input sequence
