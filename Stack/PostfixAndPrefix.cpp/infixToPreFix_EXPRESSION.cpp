#include<iostream>
#include<string>
#include <stack>
#include<algorithm>
#include<map>

using namespace std;

struct Stack{
    int top, cap;
    char *arr;
    string output;
    map<char, int> precedence;
    
    Stack(int x){
        cap = x;
        top = -1;
        arr = new char[cap];
        output = "";
        precedence['+'] = 1; 
        precedence['-'] = 1; 
        precedence['*'] = 2; 
        precedence['/'] = 2; 
        precedence['^'] = 3; 
    }

    char peek(){
        return  arr[top];
    }

    bool isEmpty(){
        return  top == -1;
    }

    void push(char x){
        arr[++top] = x;
    }

    char pop(){
        if(!isEmpty()){
            return  arr[top--];
        }
        return  '$';
    }

    bool isOperand(char x){
        return isalpha(x) || isdigit(x);
    }

    bool notGreater(char x) {        
        if (isEmpty() || peek() == ')') {
            return false;
        }

        char topOp = peek();
        
        int p_current = precedence.at(x);
        int p_top = precedence.at(topOp);

        if (x != '^')   return p_current < p_top;
        else            return p_current <= p_top;
    }


    string prefixConversion(string s){
        for(int i = s.length() - 1 ; i >= 0 ; i--){
            if(isOperand(s[i])){
                output += s[i];
            }
            else if(s[i] == ')'){
                push(s[i]);
            }
            else if(s[i] == '('){
                while (!isEmpty() && peek() != ')'){
                    char a = pop();
                    output += a;
                }
                if (!isEmpty() && peek() == ')'){
                    pop();
                }
            }
            else{
                while(!isEmpty() && notGreater(s[i])){
                    char a = pop();
                    output += a;
                }
                push(s[i]);
            }
        }

        while(!isEmpty()){
            char a = pop();
            output += a;
        }
        return  output;
    }

};

int main(){
    string exp1 = "a+b*(c^d-e)^(f+g*h)-i";
    string exp2 = "a^b^c";
    string exp3 = "x+y*z";
    

    Stack obj1(exp1.length());
    string result1 = obj1.prefixConversion(exp1);
    reverse(result1.begin(), result1.end());
    cout << "INFIX   : " << exp1 << "\nPREFIX : " << result1 << endl << endl;
    

    Stack obj2(exp2.length());
    string result2 = obj2.prefixConversion(exp2);
    reverse(result2.begin(), result2.end());
    cout << "INFIX   : " << exp2 << "\nPREFIX : " << result2 << endl << endl;


    Stack obj3(exp3.length());
    string result3 = obj3.prefixConversion(exp3);
    reverse(result3.begin(), result3.end());
    cout << "INFIX   : " << exp3 << "\nPREFIX : " << result3 << endl << endl;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the length of the infix expression
// SPACE COMPLEXITY  : O(n), for stack and output storage
