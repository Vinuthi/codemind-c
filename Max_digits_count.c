#include<stdio.h>
int digit_count(int n)
{
    int dc=0,d;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        dc++;
    }
    return dc;
}
int main()
{
    int n,arr[100],max=0,dc,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        dc=0;
        dc=digit_count(arr[i]);
         if(dc>max)
         {
             max=dc;
         }
    }
    for(i=0;i<n;i++)
    {
        if(digit_count(arr[i])==max)
        {
            c++;
        }
    }
    printf("%d",c);
}