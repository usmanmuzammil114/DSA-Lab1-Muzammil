#include <iostream>
using namespace std;
// Find first occurrence of pattern
int findPattern(string text, string pattern)
{
    int n=text.length();
    int m=pattern.length();

    if(m==0)
        return 0;

    for(int i=0;i<=n-m;i++)
    {
        int j;

        for(j=0;j<m;j++)
        {
            if(text[i+j]!=pattern[j])
                break;
        }

        if(j==m)
            return i;
    }

    return -1;
}
int main()
{
    cout<<"Beginning: "<<findPattern("computer","com")<<endl;

    cout<<"End: "<<findPattern("computer","ter")<<endl;

    cout<<"Not Present: "<<findPattern("computer","abc")<<endl;

    cout<<"Empty Pattern: "<<findPattern("computer","")<<endl;
}