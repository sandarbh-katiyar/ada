#include<conio.h>
#include<iostream>
using namespace std;
void path(int,int);
int a[20][20];
int main()
{
    int n,w,b[20][20],i,j,r,c,weight;
    cout<<"enter the no of element";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=101;
            if(i==j)
            {
                a[i][j]=0;
            }
            b[i][j]=0;
        }
    }
    cout<<"enter the no of weights you want to enter";
    cin>>w;
    for(i=0;i<w;i++)
    {
        cout<<"enter the row column and weight";
        cin>>r;
        cin>>c;
        cin>>weight;
        a[r-1][c-1]=weight;
//        if(r!=c)
//        {
//            b[r-1][c-1]=r-1;
//        }
    }
    for(int k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j]>(a[i][k]+a[k][j]))
                {
                    a[i][j]=(a[i][k]+a[k][j]);
//                    if(a[i][j]==101||i==j)
//                    {
//                        b[i][j]=0;
//                    }
//                    else if(i!=j&&a[i][j]<101)
//                    {
//                        b[i][j]=i;
//                    }
                    b[i][j]=k;
                }
            }
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\n";
    //path(1,2);

}
//void path(int q,int r)
//{
//    if(a[q][r]!=0)
//    {
//        path(q,a[q][r]);
//        cout<<a[q][r];
//        path(a[q][r],r);
//        return;
//    }
//    else
//        return;
//}
