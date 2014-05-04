#include<conio.h>
#include<iostream>
void print(int b[20][20],char a[20],int p,int q);
using namespace std;
int main()
{
    char z[20],w[20];
    int i,j,p,q,c[20][20],b[20][20];
    c[0][0]=0;
    cout<<"enter the length of 1st string";
    cin>>p;
    cout<<"enter the string";
    for(i=1;i<=p;i++)
    {
        cin>>z[i];
    }
    z[i]='\0';
    cout<<"enter the length of 2st string";
    cin>>q;
    cout<<"enter the string";
    for(i=1;i<=q;i++)
    {
        cin>>w[i];
    }
    w[i]='\0';
    for(i=1;i<=p;i++)
    {
        c[i][0]=0;
    }
    for(i=1;i<=q;i++)
    {
        c[0][i]=0;
    }
    for(i=1;i<=p;i++)
    {
        for(j=1;j<=q;j++)
        {
            if(z[i]==w[j])
            {
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]=0;
                //cout<<z[i];
            }
            else
            {
                if(c[i-1][j]>=c[i][j-1])
                {
                    c[i][j]=c[i-1][j];
                    b[i][j]=1;
                    //cout<<z[i];
                }
                else
                {
                    c[i][j]=c[i][j-1];
                    b[i][j]=2;
                    //cout<<w[j];
                }

            }
        }
    }
    for(i=1;i<=p;i++)
    {
        for(j=1;j<=q;j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<"\n";
    }
    print(b,z,p,q);



}
void print(int b[20][20],char z[20],int p,int q)
{
    if(p==0||q==0)
    {
        return;
    }
    else if(b[p][q]==0)
    {
        print(b,z,p-1,q-1);
        cout<<z[p];
    }
    else if(b[p][q]==1)
    {
        print(b,z,p-1,q);
    }
    else
    {
        print(b,z,p,q-1);
    }

}


