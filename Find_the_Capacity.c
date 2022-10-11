#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int d=2*a*b*c*512;
    cout<<(d/1024)<<"KB";
}