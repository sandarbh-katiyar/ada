#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int f1,f2,l1,l2,t1[10],t2[10],n,c1[10],c2[10],tym1,tym2;
    cout<<"enter the no of terminal";
    cin>>n;
    cout<<"first transaction time for line 1";
    cin>>f1;
    cout<<"first transaction time for line 2";
    cin>>f2;
    for(int i=0;i<n;i++)
    {
        cout<<"enter the task time for line 1";
        cin>>t1[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<"enter the task time for line 2";
        cin>>t2[i];
    }
    for(int i=1;i<n;i++)
    {
        cout<<"enter the cross transmission  time for line 1 to 2";
        cin>>c1[i];
    }
    for(int i=1;i<n;i++)
    {
        cout<<"enter the cross transmission  time for line 2 to 1";
        cin>>c2[i];
    }
    cout<<"enter the last time for line 1";
    cin>>l1;
    cout<<"enter the last time for line 2";
    cin>>l2;
    tym1=f1+t1[0];
    tym2=f2+t2[0];
    for(int i=1;i<n;i++)
    {
        if((tym1+t1[i])>(tym2+c2[i]+t1[i]))
        {
            tym1=tym1+tym2+c2[i]+t1[i];
        }
        else
        {
            tym1=tym1+t1[i];
        }
        if((tym2+t2[i])>(tym1+c1[i]+t2[i]))
        {
            tym2=tym2+tym1+c1[i]+t2[i];
        }
        else
        {
            tym2=tym2+t2[i];
        }
    }
    tym1=tym1+l1;
    tym2=tym2+l2;
    if(tym1>tym2)
    {
        cout<<tym2;
    }
    else
    {
        cout<<tym1;
    }

}
