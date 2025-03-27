#include <stdio.h>
int main(){
    int a,i,j;
    scanf("%d", &a);
    for(i='A'; i<=a; i++){
        for(j='A'; j<=i; j++){
            printf("%d", j);
        }
        printf("\n");
}
}