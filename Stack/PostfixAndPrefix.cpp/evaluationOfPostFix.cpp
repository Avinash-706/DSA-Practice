#include <iostream>
#include <stack>
#include <cmath>
#include <string>
#include <cctype>
using namespace std;


// POSTFIX EVALUATION
struct Stack {
    int cap, top;
    string output;
    char* arr;

    Stack(int x) {
        top = -1;
        cap = x;
        arr = new char[cap];
        output = "";
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(char x) {
        arr[++top] = x;
    }

    char pop() {
        if (!isEmpty()) {
            top--;
            return arr[top + 1];
        }
        else {
            return '$';
        }
    }

    char peek() {
        if (!isEmpty()) return arr[top];
        else return '$';
    }

    long long calculateValue(string exp) {
        stack<long long> s;

        for (int i = 0; i < exp.length(); i++) {
            if (isdigit(exp[i])) {
                s.push(exp[i] - '0');
            }
            else {
                if (s.size() < 2) {
                    cout << "Invalid postfix expression" << endl;
                    return -1;
                }

                long long i1 = s.top(); s.pop();
                long long i2 = s.top(); s.pop();
                long long result = 0;

                switch (exp[i]) {
                    case '+': 
                        result = i2 + i1;
                        break;
                    case '-': 
                        result = i2 - i1; 
                        break;
                    case '*': 
                        result = i2 * i1;
                        break;
                    case '/':
                        if (i1 == 0) {
                            cout << "Division by zero" << endl;
                            return -1;
                        }
                        result = i2 / i1;
                        break;
                    case '^':
                        result = pow(i2, i1);
                        break;
                    default:
                        cout << "Invalid operator: " << exp[i] << endl;
                        return -1;
                }
                s.push(result);
            }
        }

        if (s.size() != 1) {
            cout << "Invalid postfix expression" << endl;
            return -1;
        }

        return s.top();
    }
};

int main() {
    string exp1 = "242^^"; 
    string exp2 = "231*+9-";

    Stack obj(100);

    cout << "\nPOSTFIX : " << exp1 << "\nVALUE   : " << obj.calculateValue(exp1) << endl << endl;
    cout << "\nPOSTFIX : " << exp2 << "\nVALUE   : " << obj.calculateValue(exp2) << endl << endl;

    return 0;
}

// TIME  COMPLEXITY  : O(n + m × log b), where
//                      n = length of postfix expression
//                      m = number of '^' operators
//                      b = maximum exponent value

// SPACE COMPLEXITY : O(n), for operand stack during evaluation

