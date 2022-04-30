#include<stdio.h>
int main()
{
    int n,i,t1=0,t2=1;
    int nextterm=t1+t2;
    scanf("%d",&n);
    printf("%d %d",t1,t2);
    for(i=3;i<=n;i++)
    {
        printf(" %d",nextterm);
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
    }
    return 0;
}