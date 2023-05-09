#include <iostream>
#include <stack>
#include <string>
using namespace std;


int precedence(char op) {
    if(op == '+'||op == '-')
    return 1;
    if(op == '*'||op == '/')
    return 2;
    return 0;
}



int PerformOperation(int val1, int val2, char op) {
    switch(op) {
        case '+': return val2 + val1;
        case '-': return val2 - val1;
        case '*': return val2 * val1;
        case '/': return val2 / val1;
    }
    return 0;
}


string in2pos(string expression)
{
    stack<char> S;
    string postfix = ""; 
    for(int i = 0;i< expression.length();i++) {
        if(expression[i] >= '0' && expression[i] <= '9')
            postfix += expression[i];
        else if(expression[i] == '(')
            S.push(expression[i]);
        else if(expression[i] == ')')
        {
            while(!S.empty() && S.top() != '(') {
                postfix += S.top();
                S.pop();
            }
            S.pop();
        }
        else {
            while(!S.empty() && S.top() != '(' && precedence(expression[i]) <= precedence(S.top())) {
                postfix += S.top();
                S.pop();
            }
            S.push(expression[i]);
        }
    }
    while(!S.empty()) {
        postfix += S.top();
        S.pop();
    }
    return postfix;
}

int evalPostfix(string exp)
{
    stack<int> S;
    for (int i = 0; i < exp.length(); i++)
    {
        if (isdigit(exp[i]))
            S.push(exp[i] - '0');
        else
        {
            int val1 = S.top();
            S.pop();
            int val2 = S.top();
            S.pop();
            switch (exp[i])
            {
            case '+':
                S.push(val2 + val1);
                break;

            case '-':
                S.push(val2 - val1);
                break;

            case '/':
                S.push(val2 / val1);
                break;

            case '*':
                S.push(val2 * val1);
                break;
            }
        }
    }
    return S.top();
}


string postfixToInfix(string postfix)
{
    stack<string> s;
    for (int i = 0; i < postfix.size(); i++)
    {
        if (isalpha(postfix[i]))
        {
            string op(1, postfix[i]);
            s.push(op);
        }
        else
        {
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            s.push("(" + op2 + postfix[i] + op1 + ")");
        }
    }
    return s.top();
}


int main () {
    string infix = "1+2";
    cout << "Infix Expression: " << infix << endl;
    cout << "Postfix Expression: " << in2pos(infix) << endl;
    cout << "Postfix Expression value: " << evalPostfix(infix) << endl;
    cout << "Infix Expression value: " << postfixToInfix(infix) << endl;
    return 0;
}

