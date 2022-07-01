#include<stdio.h>
int main()
{
    char str[100];
    int n,m,i;
    scanf("%[^
]s",str);
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=n;i<=m;i++)
    {
        printf("%c",str[i]);
    }
}