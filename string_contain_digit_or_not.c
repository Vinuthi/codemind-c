#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,len,c=0;
    scanf("%[^
]s",str);
    len=strlen(str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("Doesn't contain digit");
    }
    else
    {
    printf("Contains %d digit",c);
    }
}