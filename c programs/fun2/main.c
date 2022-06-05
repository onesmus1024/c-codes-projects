#include <stdio.h>
#include <stdlib.h>

int addnumber(int,int);
int main()
{
    int num1=1,num2=1,result;
    printf("input two numbers");
    scanf("%d%d",&num1,&num2);
    result=addnumber(num1,num2);
    printf("summation is %d",result);
    return 0;
}
int addnumber(int a,int b)
{
    int sum;
    sum = a+b;
    return sum;
}
