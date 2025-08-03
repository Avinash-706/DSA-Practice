#include <iostream>
#include <stack>
#include <string>
#include <map>
using namespace std;


// INFIX TO POSTFIX
struct Stack{
    int cap, top;
    string output;
    char *arr;
    map<char, int> precedence;

    Stack(int x){
        top = -1;
        cap = x;
        arr = new char[cap];
        output = "";
        precedence['+'] = 1;
        precedence['-'] = 1;
        precedence['*'] = 2;
        precedence['/'] = 2;
        precedence['^'] = 3;
    }

    bool isEmpty(){
        return top == -1;
    }

    void push(char x){
        arr[++top] = x;
    }

    char pop(){
        if (!isEmpty()) {
            top--;
            return arr[top + 1];
        }
        else {
            return '$';
        }
    }

    char peek(){
        return arr[top];
    }

    bool isOperand(char x){
        return isalpha(x);
    }

    bool notGreater(char x) {
        if (isEmpty()) return false;

        char topOp = peek();
        auto a = precedence.find(x);
        auto b = precedence.find(topOp);

        if (a != precedence.end() && b != precedence.end()) {
            if (x == '^')   return a->second < b->second;         // Right-associative: only pop if lower
            else            return a->second <= b->second;        // Left-associative: pop if lower or equal
        }

        return false;
    }


    string infixToPostfix(string exp){
        for (int i = 0; i < exp.length(); i++){
            if (isOperand(exp[i])){
                output += exp[i];
            }
            else if (exp[i] == '('){
                push(exp[i]);
            }
            else if (exp[i] == ')'){
                while (!isEmpty() && peek() != '('){
                    char a = pop();
                    output += a;
                }
                if (!isEmpty() && peek() != '('){
                    cout << "Invalid expression" << endl;
                    return "";
                }
                else{
                    pop();
                }
            }

            else {
                while (!isEmpty() && notGreater(exp[i])) {
                    char a = pop();
                    output += a;
                }
                push(exp[i]);
            } 
        }

        while (!isEmpty()) {
            char a = pop();
            output += a;
        }
        return  output;
    }

};

int main()
{
    string exp1 = "a+b*(c^d-e)^(f+g*h)-i";
    string exp2 = "a^b^c";

    Stack obj1(exp1.length());
    cout << "INFIX   : " << exp1 << "\nPOSTFIX : " << obj1.infixToPostfix(exp1) << endl << endl;
    
    Stack obj2(exp2.length());
    cout << "INFIX   : " << exp2 << "\nPOSTFIX : " << obj2.infixToPostfix(exp2) << endl << endl;

    return 0;
}

// TIME  COMPLEXITY : O(n), where n is the length of the expression
// SPACE COMPLEXITY : O(n), for the stack and output string
