#include<stdio.h>
int main()
{
    int num, a = 0;
    scanf("%d%d",&num);
    while ((num & 1)) == 0)
    {
        num >>= 1;
        a++;

    }
    printf("%d\n", a);
    return 0;
}