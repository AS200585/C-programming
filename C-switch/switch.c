#include<stdio.h>

int main()
{
    char grade = 'C';

    switch(grade){ //different cases that break and a default condition incase no condition is present
        case 'A':
        printf("You did Excellent");
        break;

        case 'B':
        printf("You did Well");
        break;

        default:
        printf("You Failed");
    }
    
    return 0;
}