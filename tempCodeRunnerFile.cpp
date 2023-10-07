#include<iostream>
using namespace std;
int add(int a, int b)
{
    int c=(a+b);
    return c;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    cout<<add(n1,n2);
}