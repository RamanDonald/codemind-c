#include<iostream>
#include<climits>
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
    int c=0,a,b;
    cin>>a>>b;
    int maxn=INT_MIN;
   for(int i=0;i<n;i++)
   {
      if(arr[i]<a||arr[i]>b)
      {
          c=c+1;
          maxn=max(maxn,arr[i]);
      }
       
   }
   if(c>=1)
   {
       cout<<maxn;
    }
    else
    {
        cout<<"-1";
    }
}    