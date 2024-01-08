#include<stdio.h>

int main()
{
    int secretNum = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    while(guess != secretNum && outOfGuesses == 0){
        if(guessCount < guessLimit){
        printf("Enter a number :");
        scanf("%d", &guess);
        guessCount++; //guessCount =guessCount + 1
        } else {
            outOfGuesses = 1;
        }  
    }
    if(outOfGuesses == 1){
        printf("You lost");
    } else {
        printf("Your guess is correct!");
    }

    return 0;
}
