#include <bits/stdc++.h>
using namespace std;


//OPTIMIZED VERSION --using NextSmallest and PreviousSmallest Approach BUT NOT SINGLE TRAVESAL
struct Stack{
    int *arr;
    int cap, top;
    
    Stack(int x){
        cap = x;
        top = -1;
        arr = new int[cap];
    }

    void push(int x){
        arr[++top] = x;
    }

    void pop(){
        arr[top--];
    }

    int peek(){
        return    arr[top];
    }

    bool isEmpty(){
        return    (top == -1);
    }
};

void prevSmallest(int n, int input[], vector<int> &ps){
    Stack s1(n);
    s1.push(0);
    ps[0] = -1;
    
    for(int i = 1; i < n; i++){
        while(!s1.isEmpty() && input[s1.peek()] >= input[i]){
            s1.pop();
        }
        if(s1.isEmpty()){
            ps[i] = -1;
        }
        else{
            ps[i] = s1.peek();
        }
        s1.push(i);
    }
    
}

void nextSmallest(int n, int input[], vector<int> &ns){
    Stack s1(n);

    for (int i = n - 1; i >= 0; i--) {
        while (!s1.isEmpty() && input[s1.peek()] >= input[i]) {
            s1.pop();
        }

        if (s1.isEmpty()) {
            ns[i] = n;
        } else {
            ns[i] = s1.peek();
        }

        s1.push(i);
    }
}

int main(){
    int n = 7;
    int input[n] = {6, 2, 5, 4, 1, 5, 6};

    vector<int> ps(n);      //prev smallest
    vector<int> ns(n);      //next smallest

    prevSmallest( n, input, ps);
    nextSmallest( n, input, ns);

    cout << "\n============================== HISTOGRAM ANALYSIS ==============================\n";
    cout << "\nOriginal Histogram             : ";
    for(int i = 0 ; i < n ; i++)    cout << input[i] << "  ";

    cout << "\n\nPrevious Smaller Element Index : ";
    for(int i : ps)     cout << i << "  ";

    cout << "\nNext     Smaller Element Index : ";
    for(int i : ns)     cout << i << "  ";

    cout << "\n\nDetailed Rectangle Widths and Areas:\n";
    cout << "-------------------------------------------------------------------------------\n";
    cout << "Index | Height | PSE | NSE | Width | Area\n";
    cout << "-------------------------------------------------------------------------------\n";

    int maxValue = 0;
    for(int i = 0 ; i < n ; i++){
        int width = ns[i] - ps[i] - 1;
        int area = input[i] * width;
        maxValue = max(maxValue, area);
        printf("  %2d   |   %2d   | %2d  | %2d  |  %2d   | %3d\n", i, input[i], ps[i], ns[i], width, area);
    }

    cout << "------------------------------------------------------------------------------\n";
    cout << "Largest Rectangular Area in Histogram : " << maxValue << "\n";
    cout << "==============================================================================\n\n";

}


// TIME  COMPLEXITY  : O(n), where 'n' is the size of the histogram BUT NOT SINGLE TRAVERSAL
// SPACE COMPLEXITY  : O(n), for stacks and auxiliary arrays
