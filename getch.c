#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char pass[100];
    char match[100];
    int i;
    char ch;

    int flag=1;

    printf("Enter your password(maximum 10 chars):");

    for(i=0;i<10;i++)
    {
        ch=getch();

        if(ch==13)
        {
            break;
        }
        else
        {
            pass[i]=ch;
            printf("*");
        }
    }
    printf("\n");
    printf("Re enter your password:");
    for(i=0;i<10;i++)
    {
        ch=getch();

        if(ch==13)
        {
            break;
        }
        else
        {
            match[i]=ch;
            printf("*");
        }
    }
    printf("\n");
    for(i=0;i<strlen(pass);i++)
    {
        if(pass[i]==match[i])
        {
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("Passwords match\n");
    }
    else
    {
        printf("Passwords do not match\n");
    }

    return 0;

}
