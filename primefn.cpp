#include<iostream>
#include<string.h>
using namespace std;
string prime(int n)
{ int count=0;
    for(int i=1;i<=n;i++)                             
 {if (n%i==0)
       {count++;}
        if(count==2)
        {return "prime";}
        else
        { return "not prime";}
    }
}
    int main()
    {   int n;
        cin>>n;
       cout<<prime(n);
    }