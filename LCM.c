#include <stdio.h>
int main()
{
    int a,b;
    //printf("enter two numbers
");
    scanf("%d",&a);
    scanf("%d",&b);
/*
    *LCM is always greater than or equal to the-
    *maximum of the given two numbers
    */
    int lcm=(a>b) ? a:b;
    //loop untill divisible by both
    while(1)
    {
        if (lcm%a==0 && lcm%b==0)
        break;
        lcm++;
    }
    //output the lcm
    printf("%d",lcm);
    return 0;
}