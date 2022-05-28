#include <iostream>
#include <stack>
using namespace std;
 
bool hasDuplicateParenthesis(string exp)
{
    if (exp.length() <= 3) {
        return false;
    }
 
    stack<char> stack;
 
    for (char c: exp)
    {
        if (c != ')') {
            stack.push(c);
        }
        else {
            if (stack.top() == '(') {
                return true;
            }
 
            while (stack.top() != '(') {
                stack.pop();
            }
 
            stack.pop();
        }
    }
 
    return false;
}
 
int main()
{
    string exp = "((x+y))";
 
    if (hasDuplicateParenthesis(exp)) {
        cout << "The expression has duplicate parenthesis.";
    }
    else {
        cout << "The expression does not have duplicate parenthesis";
    }
 
    return 0;
}