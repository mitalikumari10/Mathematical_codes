#include<iostream>
using namespace std;
int main()
{
    int n,first,last,r;
    cout<<"enter a number";
    cin>>n;
    last=n%10;
    while(n>10)
    {
        r=n%10;
        n=n/10;
    }
    
    int temp=first;
    first=last;
    last=temp;
    cout<<n,last; 
}