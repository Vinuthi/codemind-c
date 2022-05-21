#include<stdio.h>
int main()
{
    int n,arr[100],i,avrg,c=0,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    avrg=s/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=avrg)
        {
            c++;
        }
    }
    printf("%d",c);
}