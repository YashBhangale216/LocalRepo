#include<stdio.h>
#include<stdlib.h>

int main()
{
    char operator; 
    double num1, num2;
    printf("Enter An Operator (+,-,*,/)");
    scanf("%c",&operator);
    printf("Enter The Value:");
    scanf("%lf",&num1);
    printf("Enter Second Value:");
    scanf("%lf",&num2);

    switch (operator)
    {
        case '+':
        printf("%1lf",num1+num2);
        break;

        case '-':
        printf("%1lf",num1-num2);
        break;

        case '*':
        printf("%1lf",num1*num2);
        break;

        case '/':
        printf("%1lf",num1/num2);
        break;

        default:
        printf("Error !!! Operator Is Not Found");
    }

    return 0;
}