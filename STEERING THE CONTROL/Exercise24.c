//Atharva Nayak
//0905CS241063

#include<stdio.h>

int main()
{
    char ch;
    printf("Enter character:- ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
        printf("Uppercase");
    else if(ch>='a' && ch<='z')
        printf("Lowercase");
    else if(ch>='0' && ch<='9')
        printf("Digit");
    else
        printf("Special Character");

    return 0;
}