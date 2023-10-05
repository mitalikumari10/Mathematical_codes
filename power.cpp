#include<iostream>
using namespace std;
int main()
{
    int exponent,base,pro=1;
    cout<<"enter base";
    cin>>base;
    cout<<"enter exponent";
    cin>>exponent;
    for(int i=1; i<=exponent; i++)
        pro = pro * base;
    cout<<"Power" <<pro;
    
}