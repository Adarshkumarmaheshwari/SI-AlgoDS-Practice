#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{
    int n = s.length();
    stack<char> st;
    bool ans = true;
    for (int i{0}; i < n; i++)
    {
        if (s[i] == '{' || s[i] == '(' || s[i] == '[')
            st.push(s[i]);
        else if (s[i] == ')')
        {
            if (st.top() == '(')
                st.pop();
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == ']')
        {
            if (st.top() == '[')
                st.pop();
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == '}')
        {
            if (st.top() == '{')
                st.pop();
            else
            {
                ans = false;
                break;
            }
        }
    }
    return ans;
}

int main()
{
    string s = "{([])}";
    if (isValid(s))
    {
        cout << "Hurrah! Valid Paranthesis String" << endl;
    }
    else
    {
        cout << "Oops! Invalid Parenthesis String" << endl;
    }
    return 0;
}