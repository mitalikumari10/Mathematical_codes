#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,rem,temp;   
    cout<<"enter any number"<<endl;
    cin>>num;
    temp=num;
    for(int i=1;i<=num;i++){
       rem=num%10;
       sum=sum+(rem*rem*rem);
       num=num/10;
    }
    if(temp==sum)
    {
        cout<<"armstrong";
    }
    else{
        cout<<"not";
    }
}