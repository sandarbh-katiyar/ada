#include<stdio.h>
#include<conio.h>
void main()
{
    int weight[10],profit[10];
    int max,x,i,ch,j,temp,pro=0,upper=0;
    float p,q,r,s;
    printf("enter the no of entries");
    scanf("%d",&x);
    printf("enter the weights");
    for(i=0;i<x;i++)
    {
        scanf("%d",&weight[i]);

    }
    printf("enter the profit");

    for(i=0;i<x;i++)
    {
        scanf("%d",&profit[i]);

    }
    printf("enter the max weight");
    scanf("%d",&max);
    printf("enter the choice \n 1.By weight \n 2. By profit \n 3.By pofit ratio weight \n");
    scanf("%d",&ch);
    if(ch==1)
    {
        for(i=0;i<x;i++)
        {
            for(j=0;j<x-1;j++)
            {
                if(weight[j]>weight[j+1])
                {
                    temp=weight[j];
                    weight[j]=weight[j+1];
                    weight[j+1]=temp;
                    temp=profit[j];
                    profit[j]=profit[j+1];
                    profit[j+1]=temp;
                }

            }

        }
        for(i=0;i<x;i++)
        {
            printf("%d \t %d \n",weight[i],profit[i]);
        }
        for(i=0;i<x;i++)
        {
            upper=upper+weight[i];
            if(upper>max)
            break;
            else
            pro=pro+profit[i];
        }
        printf("%d",pro);

    }
    printf("enter the choice \n 1.By weight \n 2. By profit \n 3.By pofit ratio weight \n");
    upper=0;
    pro=0;
    if(ch==1)
    {
        for(i=0;i<x;i++)
        {
            for(j=0;j<x-1;j++)
            {
                if(profit[j]<profit[j+1])
                {
                    temp=weight[j];
                    weight[j]=weight[j+1];
                    weight[j+1]=temp;
                    temp=profit[j];
                    profit[j]=profit[j+1];
                    profit[j+1]=temp;
                }
            }

        }
        for(i=0;i<x;i++)
        {
            printf("%d \t %d \n",weight[i],profit[i]);
        }
        upper=0;
        pro=0;
        for(i=0;i<x;i++)
        {
            upper=upper+weight[i];
            if(upper>max)
            break;
            else
            pro=pro+profit[i];
        }
        printf("%d",pro);

    }
    printf("enter the choice \n 1.By weight \n 2. By profit \n 3.By pofit ratio weight \n");
    upper=0;
    pro=0;
    if(ch==1)
    {
        for(i=0;i<x;i++)
        {
            for(j=0;j<x-1;j++)
            {
                p=profit[j];
                q=weight[j];
                r=profit[j+1];
                s=weight[j+1];
                if((p/q)<(r/s))
                {
                    temp=weight[j];
                    weight[j]=weight[j+1];
                    weight[j+1]=temp;
                    temp=profit[j];
                    profit[j]=profit[j+1];
                    profit[j+1]=temp;
                }

            }

        }
        for(i=0;i<x;i++)
        {
            printf("%d \t %d \n",weight[i],profit[i]);
        }
        for(i=0;i<x;i++)
        {
            upper=upper+weight[i];
            if(upper>max)
            break;
            else
            pro=pro+profit[i];
        }
        printf("%d",pro);

    }

}
