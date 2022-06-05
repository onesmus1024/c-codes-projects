#include <stdio.h>
#include <stdlib.h>

int main()
{
   char another='y';
   int num;
   while(another=='y');
   {
       printf("enter a number:\n");
       scanf("%d",&num);
       printf("square of %d is %d",num,num*num);
       printf("\nwant to enter another number y/n:\n");
       scanf("%c",another);
   }

    return 0;
}
