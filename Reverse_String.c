#include<stdio.h>
int strlen(char *str)
{
    int i,c=0;
    for(i=0;str[i]!=NULL;i++)
    {
        c++;
    }
    return c;
}
void string_reverse(char *str)
{
    int i,j,len;
    char temp;
    i=0;
    len=strlen(str);
    j=len-1;
    while(i<j)
    {
      temp=str[i];
      str[i]=str[j];
      str[j]=temp;
      i++;
      j--;
    }
}
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    string_reverse(str);
    printf("%s",str);
}
