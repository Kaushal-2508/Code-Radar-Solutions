#include<stdio.h>
int main()
{
    int a,b,c;
    printf("");
    scanf("%f%f%f",&a,&b,&c);
    if(c*c == a*a + b*b)
    {
    printf("Valid");}
    else{
    printf("Invalid");}
    return 0;
}