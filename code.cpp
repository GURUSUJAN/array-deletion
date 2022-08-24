#include"iostream"
#include"bits/stdc++.h"
using namespace std;
int main()
{
    int ar[10];
    int i=0;
    for(i=0;i<10;i++)
    {
        
        cin>>ar[i];
    }
    int num=0,count=0;
   // cout<<"e";
    cin>>num;
    for(i=0;i<10;i++)
    {
        if(ar[i]!=num)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    if(count!=10)
    {
    cout<<count+1<<endl;
    }
    else
    {
        cout<<"ELEMENT NOT FOUND"<<endl;
    }
}
