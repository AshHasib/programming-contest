#include<stdio.h>

int main()
{
    char ch;

    printf("Enter your alphabet:");
    scanf("%c",&ch);

    if(ch>='A' && ch<='z')
    {
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' ||ch=='U' ||ch=='a' || ch=='e' || ch=='i' || ch=='o' ||ch=='u')
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
    }
    else
    {
        printf("Ultapalta\n");
    }
    return 0;
}
