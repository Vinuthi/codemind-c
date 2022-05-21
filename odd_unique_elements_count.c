#include<stdio.h>
int main()
{
    int n,i,j,c=0,s=0,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
         if(arr[j]==arr[i]&&i!=j)
        {
            arr[i]=-1;
        }
    }
}
for(int k=0;k<n;k++)
{
    if(arr[k]!=-1)
    {
        if(arr[k]%2==1)
        {
        s++;
    }
  }
}
 printf("%d",s);
}