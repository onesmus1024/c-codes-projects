#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,sum=0,range;
    printf("enter your range:\n");
    scanf("%d",&range);
    while(i<=range)
        {
            printf("%d\n",i);
            sum =sum+i;
            i+=1;

        }
     printf("%d",sum);

    return 0;
}
