#include<stdio.h>

int main()
{
    int age = 30;
    int *pAGE = &age;
    double gpa = 3.5;
    double *pGPA = &gpa;
    char grade = 'B+';
    char *pGRADE = &grade;

    printf("%p\n", pAGE);
    printf("%d", *pAGE); //*pAGE is no longer a memory address. This is call pointer dereferencing
    //printf("%d", *&age); another mothod to dereference pointers
    

    return 0;
}