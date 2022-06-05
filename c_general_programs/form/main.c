#include <stdio.h>

int main()
{
 int age,i;
 for(i=0;i<=10;i++)
    {
        printf("enter you age:\n");
        scanf("%d",&age);
        if (age<=15)
            printf("toddler");
        else if (age>=30)
            printf("adult\n");
        else
            printf("underage");
    };

    return 0;
}
