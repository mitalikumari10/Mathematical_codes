#include<iostream>
using namespace std;
int main()
{
    int i,count=0;
    cout<<"enter no";
    cin>>i;
    for(int j=1;j<=1;j++)

    {  if(i%j==0)
        count++;
    }
    if(count==2)
    {
        cout<<"prime";
    }
    else{
        cout<<"not";
    }
}
