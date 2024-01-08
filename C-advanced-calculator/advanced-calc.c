#include<stdio.h>

int main()
{
    double num1;
    double num2;
    char op;

    printf("Enter number 1 = ");
    scanf("%lf", &num1);
    printf("Enter number 2 = ");
    scanf("%lf", &num2);
    printf("Enter operator : ");
    scanf("%c", &op);

    if(op == '+'){
        printf("%lf", num1 + num2);
    } else if(op == '-'){
        printf("%lf", num1 - num2);
    } else if(op == '*') {
        printf("%lf", num1 * num2);
    } else if(op == '/'){
        printf("%lf", num1 / num2);
    } else {
        printf("Invalid operator");
    }
    return 0;
}