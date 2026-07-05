#include <iostream>
#include <vector>
using namespace std;

// Find all indices of key
vector<int> findIndices(int arr[], int n, int key)
{
    vector<int> v;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
            v.push_back(i);
    }

    return v;
}

int main()
{
    int arr[]={2,5,3,5,7,5};
    int n=6;

    vector<int> result;

    cout<<"Multiple occurrences: ";
    result=findIndices(arr,n,5);

    if(result.empty())
        cout<<"Key not found";
    else
        for(int i=0;i<result.size();i++)
            cout<<result[i]<<" ";

    cout<<endl;

    cout<<"Key not present: ";
    result=findIndices(arr,n,9);

    if(result.empty())
        cout<<"Key not found";
    else
        for(int i=0;i<result.size();i++)
            cout<<result[i]<<" ";

    cout<<endl;

    int empty[1];

    cout<<"Empty array: ";
    result=findIndices(empty,0,5);

    if(result.empty())
        cout<<"Key not found";
    else
        for(int i=0;i<result.size();i++)
            cout<<result[i]<<" ";
}