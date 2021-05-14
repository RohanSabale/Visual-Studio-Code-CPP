// cpp problem to check for balanced brackets

#include<bits/stdc++.h>
using namespace std;

bool areBracketsBalanced(string expr)
{
    stack <char> s;
    char x;

    for(int i =0;i<expr.size();i++)
    {
        if(expr[i] == '(' || expr[i] =='[' || expr[i] == '{')
        {
            s.push(expr[i]);
            continue;
        }

        if(s.empty())
        {
            return false;               // stack does not have any opening brackets
        }

        switch(expr[i])
        {
            case ')':
            x = s.top();
            s.pop();
            if(x =='{' || x =='[')
            {
                return false;
            }
            break;

            case ']':
            x = s.top();
            s.pop();
            if(x =='{' || x =='(')
            {
                return false;
            }
            break;

            case '}':
            x = s.top();
            s.pop();
            if(x =='[' || x =='(')
            {
                return false;
            }
            break;
        }
    }
    return(s.empty());
}

int main()
{
    string expr  = "{]}()";

    if(areBracketsBalanced(expr))
        cout<<"Balanced";
    else
        cout<<"Not balanced";
    return 0;
}