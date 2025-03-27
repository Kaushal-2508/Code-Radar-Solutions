#include<stdio.h>
int main()
{
    undesgined int num;
    scanf("%d", &num);
    if(num == 0) {
        printf("32\n");
        return 0;
    }
    int count = 0;
    for (int i = 31, i >= 0; i--) {
        if((num >> i) & 1) {
            break;
        }
        count++;
    }
    printf("%d\n",count);
    return 0;


}