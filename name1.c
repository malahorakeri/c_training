#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[100];
    int age;
    float marks;
};
void main()
{

    struct student s1;
    s1.age = 18;
    s1.marks = 100;
    strcpy(s1.name,"karthik");
    
    struct student s2;
    s2.age =19;
    s2.marks = 99.9;
    strcpy(s2.name,"madhura");

    struct student s3 ={"akshya",18,100};

    printf("%s",s3.name);
    printf("%s",s1.name);
    printf("%s",s2.name);




}


