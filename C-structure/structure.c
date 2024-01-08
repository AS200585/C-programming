/*
struct is a data structure where we can store groups of data types. 
Inside of a struct I could store like an integer alongside of a string alongside a character alongside a double.
We can sort all these different data types in one single data.
*/

#include<stdio.h>

struct Student{
    char name;
    char major;
    int age;
    float marks;
};

int main()
{
    struct Student student1;
    student1.name = "Andy";
    student1.major = "B.Sc";
    student1.age = 19;
    student1.marks = 4.71;

    struct Student student2;
    student2.name = "Brad";
    student2.major = "M. Tech";
    student2.age = 23;
    student2.marks = 3.91;

    return 0;
}