#include<stdio.h>

int main()
{
    char line[255];

    FILE * fpointer = fopen("Employees.txt", "a"); //"w" for writing, "a" for appending, "r" for reading

    fprintf(fpointer, "This is an employees file.\n");
    fprintf(fpointer, "\nNelson, Manager \nCindy, Cashier");
    fgets(line, 255, fpointer); //To read information from each line in the text file
                                //More the fgets() command, more different number of line read

    fclose(fpointer);

    return 0;
}