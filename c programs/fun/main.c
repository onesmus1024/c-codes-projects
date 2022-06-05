#include <stdio.h>
#include <stdlib.h>

int main()
{
    fun();
}
fun()
{
    int num1,num2,sum;
    printf("enter num1:\n");
    scanf("%d",&num1);
    printf("enter num2:\n");
    scanf("%d",&num2);
    sum = num1 + num2;
    printf("The sum is %d",sum);
}
