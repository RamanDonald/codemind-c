#include<iostream>
#include<cmath>
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
       if(arr[i]==1 || arr[i]==0)
       {
           c=c+1;
       }
       
   }
   if(c==n)
   {
       cout<<"True";
   }
   else
   {
       cout<<"False";
   }
   
}