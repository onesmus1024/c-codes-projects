#include<stdio.h>
int main ()
{
    int age;
    printf("enter your age:\n");
    if(age<=18)
        printf("underage");
    else if(age<=35&&age>18)
        printf("youth");
    else if(age<=50&&age>35)
        printf("young adult");
    else if(age<=65&&age>50)
        printf("adult");
    else
        printf("dead");

}
