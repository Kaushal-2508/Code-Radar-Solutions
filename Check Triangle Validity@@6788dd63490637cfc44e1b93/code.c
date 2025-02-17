#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(c*c == a*a + b*b)
    printf("Valid");
    else
    printf("Invalid");
    return 0;
}