#include <iostream>
#include <stack>
using namespace std;
// Function to check balanced brackets
bool balanced(string s)
{
    stack<char> st;
    // Traverse string
    for(char c : s)
    {
        // Push opening brackets
        if(c=='(' || c=='{' || c=='[')
            st.push(c);

        else
        {
            if(st.empty())
                return false;

            if((c==')' && st.top()!='(') ||
               (c=='}' && st.top()!='{') ||
               (c==']' && st.top()!='['))
                return false;

            st.pop();
        }
    }

    return st.empty();
}

int main()
{
    cout << balanced("({[]})") << endl;
    cout << balanced("([)]") << endl;
}