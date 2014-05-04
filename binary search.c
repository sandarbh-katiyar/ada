#include<stdio.h>
#include<conio.h>
int recursion(int [],int,int);
void iteration(int[],int);
void main()
{
    int arr[10],i,ch,key,mid=5,ans;
    printf("enter the no in increasing order");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);

    }

    printf("\n press \n 1.using recurion \n 2.using iteration\n");
    scanf("%d",&ch);
    printf("enter the key to be searched");
    scanf("%d",&key);
    switch(ch)
    {
        case 1: ans=recursion(arr,key,mid);
                printf("the position is %d",ans);
                break;
        case 2: iteration(arr,key);
                break;

    }
    getch();
}
int recursion(int arr[10],int key,int mid)
{
    int ans;
    if(arr[mid]==key)
    return ++mid;
    else
    {
        if(arr[mid]>key)
        {
            mid=(0+mid)/2;
        }
        else if(arr[mid]<key)
        {
            mid=(mid+10)/2;
        }
        recursion(arr,key,mid);
    }

}
void iteration(int arr[10], int key)
{
    int mid=5,i;
    for(i=0;i<10;i++)
    {
        printf("%d \t",arr[i]);
    }
    while(mid<10 || mid>0)
    {

        if(arr[mid]>key)
        {
            mid=(0+mid)/2;
        }
        else if(arr[mid]<key)
        {
            mid=(mid+10)/2;
        }
        else if(arr[mid]==key)
        {
            break;
        }
        else
        {
            printf("match not found");
        }

    }
    printf("\n the position is %d",mid+1);


}
