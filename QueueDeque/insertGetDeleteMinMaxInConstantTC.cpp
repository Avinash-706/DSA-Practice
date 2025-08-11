#include <iostream>
#include <deque>
using namespace std;


//Designing Data Structure which Performs InsertMin, InsertMax, GetMin, GetMax ,DeleteMin, DeleteMax Operations in O(1) Time Complexity
struct DueueOperation{
    deque<int> dq;
    

    void insertMin(int x){
        if (dq.empty()) {
            dq.push_back(x);
            return  ;
        }
        if (x >= dq.back()) {
            cout << "Element is Greater Than or Equal to Current Min : " << getMin() << endl;
            return  ;
        }
        dq.push_back(x);
    }

    void insertMax(int x){
        if (dq.empty()) {
            dq.push_front(x);
            return  ;
        }
        if (x <= dq.front()) {
            cout << "Element is Smaller Than or Equal to Current Max : " << getMax() << endl;
            return  ;
        }
        dq.push_front(x);
    }


    int getMin(){
        if(dq.empty()){
            cout << "Empty !!" << endl;
            return  -1;
        }
        return  dq.back();
    }

    int getMax(){
        if(dq.empty()){
            cout << "Empty !!" << endl;
            return  -1;
        }
        return  dq.front();
    }

    int extractMin(){
        if(dq.empty()){
            cout << "Empty !!" << endl;
            return  -1;
        }
        int x = dq.back();
        dq.pop_back();
        return  x;
    }

    int extractMax(){
        if(dq.empty()){
            cout << "Empty !!" << endl;
            return  -1;
        }
        int x = dq.front();
        dq.pop_front();
        return  x;
    }
};


int main() {
    DueueOperation d;

    d.insertMin(5);
    d.insertMax(10);
    d.insertMin(3);
    d.insertMax(15);
    d.insertMin(2);

    cout << "Minimum : " << d.getMin() << endl;
    cout << "Maximum : " << d.getMax() << endl;

    d.insertMin(1);
    cout << "Minimum : " << d.getMin() << endl;

    d.insertMax(20);
    cout << "Maximum : " << d.getMax() << endl;

    cout << "Extracted Min: " << d.extractMin() << endl;
    cout << "Extracted Max: " << d.extractMax() << endl;

    cout << "Minimum after extraction : " << d.getMin() << endl;
    cout << "Maximum after extraction : " << d.getMax() << endl;

    return 0;
}

// TIME  COMPLEXITY : All Operations in O(1)
// SPACE COMPLEXITY : O(n), the number of elements we want to insert