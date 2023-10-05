#include<iostream>
#include<string.h>
using namespace std;
string pal(int n)
{ 
    int temp,neww=0,r;
    temp=n;
    while(n>0)
    {
        r=n%10;
        neww=(neww*10)+r;
        n=n/10;
         }
         if(neww==temp)
        { return "palindrome";}
         else{return "not palindrome";}
}
int main()
{
    int n;
    cin>>n;
    cout<<pal(n);
}