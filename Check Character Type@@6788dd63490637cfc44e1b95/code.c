#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch == "A" || ch == "a" || ch == "E" || ch == "e" || ch == "I" || ch == "i" || ch == "O" || ch == "o"|| ch == "U" || ch == "u")
    printf("Vowel");
    else if((ch >= "a" && ch <= "z") || (ch >= "A" && ch <= "Z"))
    printf("Consonant");
    else if((ch >= "0" && ch <= "9"))
    printf("Digit")
    else
    printf("Special Charachter");
    return 0;
    }