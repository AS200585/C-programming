#include<stdio.h>

int main()
{
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    printf("age : %p \ngpa : %p \ngrade : %p\n", &age, &gpa, &grade); /*age : 000000000061FE1C 
                                                                        gpa : 000000000061FE10
                                                                        grade : 000000000061FE0F*/
                                                          

    return 0;
}