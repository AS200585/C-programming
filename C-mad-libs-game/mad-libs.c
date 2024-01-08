#include<stdio.h>
#include<stdlib.h>

int main()
{
    char colour[20];
    char pluralNoun[20];
    char celebrity[20];
    printf("Colour : ");
    scanf("%s", &colour);
    printf("Plural Noun : ");
    scanf("%s", &pluralNoun);
    printf("Celebrity : ");
    scanf("%s", &celebrity);

    printf("Roses are %s. \n", colour);
    printf("%s are blue. \n", pluralNoun);
    printf("I love %s. \n", celebrity);

    return 0;
}