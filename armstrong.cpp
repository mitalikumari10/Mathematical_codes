#include<iostream>
using namespace std;
int main()
{
    int i,num,sum=0,rem,temp;   
    cout<<"enter any number"<<endl;
    cin>>num;
    
    for(int i=1;i<=num;i++){
       temp=i;
       while(temp>0)
       {
       rem=num%10;
       sum=sum+(rem*rem*rem);
       num=num/10;
    }
    }
    if(sum==i)
    {
    cout<<i;
    }
}