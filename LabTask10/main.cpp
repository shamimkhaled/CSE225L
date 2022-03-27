//SHAMIM MIAH 1813597642
#include <iostream>
#include "stacktype.cpp"
#include <string>

using namespace std;

bool isOperator(char str)
{
    if(str=='+'||str=='-'||str=='*'||str=='/'||str=='('||str==')')
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool priority(char str)
{
    if(str=='+')
        return 1;
    else if(str=='-')
        return 2;
    else if(str=='*')
        return 3;
    else if(str=='/')
        return 4;
    else if(str=='(')
        return 5;
    else if(str==')')
        return 0;


}

int main()
{
    string infix_expr;
    cin >> infix_expr;
    string postfix;
    StackType<char> stack;
    for(int i=0; i<infix_expr.size(); i++)
    {
        if(infix_expr[i]=='('||infix_expr[i]==')')
        {
            if(infix_expr[i]=='(')
            {
                stack.Push(infix_expr[i]);
            }
            else
            {
                while(!stack.IsEmpty())
                {
                    postfix+=stack.Top();
                    stack.Pop();
                }
            }
        }

        else if(isdigit(infix_expr[i]))
        {
            postfix+=infix_expr[i];
        }
        else if(isOperator(infix_expr[i]))
        {
            if(stack.IsEmpty())
                stack.Push(infix_expr[i]);
            else if(priority(stack.Top())>=priority(infix_expr[i]))
                stack.Push(infix_expr[i]);
            else
            {
                while(!stack.IsEmpty())
                {
                    postfix+=stack.Top();
                    stack.Pop();
                }
            }
        }
    }
    while(!stack.IsEmpty())
    {
        postfix+=stack.Top();
        stack.Pop();
    }
    cout << postfix << endl;

    return 0;
}
