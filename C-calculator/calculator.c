#include<stdio.h>

int main()
{
    int num1;
    int num2; 
    printf("Enter the numbers: %d, %d ");
    scanf("%d, %d", &num1, &num2);

    printf("Answer : %d", num1 + num2);
    printf("Answer : %d", num1 - num2);
    printf("Answer : %d", num1*num2);

    return 0;

}
