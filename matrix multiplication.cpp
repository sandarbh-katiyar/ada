#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int arr[10],m[10][10],b[10][10],n,k,q;
    cout<<"enter the no of matrix u want";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter the order";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        m[i][i]=0;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            k=j+i;
            m[j][k]=101;
            for(int l=j;l<k;l++)
            {
                q=m[j][l]+m[l+1][k]+(arr[j-1]*arr[l]*arr[k]);
                if(q<m[j][k])
                {
                    m[j][k]=q;
                    b[j][k]=l;
                }
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<m[i][j]<<"\t";

        }
        cout<<"\n";
    }
//    for(int i=0;i<n;i++)
//    {
//        for(int j=i;j<n;j++)
//        {
//            cout<<b[i][j]<<"\t";
//
//        }
//        cout<<"\n";
//    }

}
