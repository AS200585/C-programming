#include<stdio.h>

double cube(double num); //If we create functions with return value below main() function

int main()
{
    printf("Answer = %f", cube(65));

    return 0;
}

double cube(double num)
{
    double result = num * num * num; //return; breaks us out of the function
    return result;
}