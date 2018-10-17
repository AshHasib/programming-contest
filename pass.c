#include<stdio.h>

int main()
{
    char c1,c2,c3,c4;

    c1=getch();
    printf("*");
    c2=getch();
    printf("*");
    c3=getch();
    printf("*");
    c4=getch();
    printf("*");
    printf("\n");
    printf("You have entered :%c%c%c%c\n",c1,c2,c3,c4);
    return 0;
}
