#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        
        
            c=c+arr[i];
        
        
    }
    cout<<c;
}