#include<stdio.h>

int main()
{
    int num;

    printf("Enter your number:");
    scanf("%d",&num);


    if(num<=100)
    {

        if(num>=80)
        {
            printf("A+\n");
        }
        else if(num>=70 && num<=79)
        {
            printf("A\n");
        }
        else if(num>=60 && num <=69)
        {
            printf("A-\n");
        }
        else if(num>=50&& num<=59)
        {
            printf("B\n");
        }
        else if(num>=40&& num<=49)
        {
            printf("C\n");
        }
        else if(num<0)
        {
            printf("Negative number not allowed in grading\n");
        }
        else
        {
            printf("Fail\n");
        }
    }
    else
    {
        printf("Invalid number\n");
    }

    return 0;
}
