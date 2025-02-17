#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a,&b);
    if(a % 400 == 0)
    printf("Not a leap year");
    else if(a % 100 ==0)
    printf("Not a leap year");
    else if(a % 4 ==0)
    printf("Leap Year");
    else
    printf("Not a leap year");

    return 0;
}