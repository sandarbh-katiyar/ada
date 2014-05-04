#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,a[20][20],edge,row,column,weight,parent,dist[20],visit[20],x;
    cout<<"enter the no of nodes";
    cin>>n;

    cout<<"enter the edges u want to enter";
    cin>>edge;
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
           a[i][j]=100;
       }
    }
    for(int i=0;i<edge;i++)
    {
        cout<<"enter the row,column and weight";
        cin>>row>>column>>weight;
        a[row-1][column-1]=weight;
    }
    cout<<"enter the parent node";
    cin>>parent;
    parent--;
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
           cout<<a[i][j]<<"\t";
       }
       cout<<"\n";
    }
    cout<<"\n";
    for(int i=0;i<n;i++)
    {

        dist[i]=a[parent][i];
        visit[i]=1;
    }
    dist[parent]=0;
    visit[parent]=0;
    for(int i=0;i<n;i++)
    {
        cout<<dist[i]<<"\t";
    }
    cout<<"\n";
    for(int i=1 ;i<n;i++)
    {
        int small=51;
        for(int j=0;j<n;j++)
        {
            if(visit[j]!=0)
            {
                if(small>dist[j])
                {
                    small=dist[j];
                    x=j;
                }

            }
        }
        visit[x]=0;
        for(int q=0;q<n;q++)
        {
             if(a[q][x]!=100&&a[x][q]!=100)
            {
               if(visit[q]!=0)
                {
//                    if((dist[x]+a[x][q])>(dist[x]+a[q][x]))
//                       {
//                           dist[q]=dist[x]+a[q][x];
//                       }
//                    else
                      if(dist[q]>(dist[x]+a[x][q]))
                       {
                           dist[q]=dist[x]+a[q][x];
                       }

                }
                //continue;
            }

//            else if(a[q][x]!=100)
//            {
//                if(visit[q]!=0)
//                {
//                    if(dist[q]>(dist[x]+a[q][x]))
//                       {
//                           dist[q]=dist[x]+a[q][x];
//                       }
//
//                }
//
//            }
            else if(a[x][q]!=100)
            {

                if(visit[q]!=0)
                {
                    if(dist[q]>(dist[x]+a[x][q]))
                       {
                           dist[q]=dist[x]+a[x][q];
                       }
                    else
                    {
                        dist[q]=dist[x]+a[q][x];
                    }

                }
            }


        }
        for(int i=0;i<n;i++)
    {
        cout<<dist[i]<<"\t";
    }
    cout<<"\n";

    }
    for(int i=0;i<n;i++)
    {
        cout<<dist[i]<<"\t";
    }

}
