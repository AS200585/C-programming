#include<stdio.h>

int main()
{
    sayHi("Mike", 20); //calling out the function sayHi()
    sayHi("Anderson", 23);
    sayHi("Kelly", 19);
    return 0;
}

void sayHi(char name[], int age){
    printf("Hello %s !You are %d years old\n", name, age);
}