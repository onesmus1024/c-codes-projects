#include <stdio.h>
#include <stdlib.h>

int main()
{ int i,age;
  for(i=0;i<20;i=i+1)
    {

         printf("enter your age:\n");
         scanf("%d",&age);
         if (age>=20&&age<=30)
             printf("youth\n");

         else if(age<=20)
             printf("teenager\n");
         else if(age<=10&&age>=5)
             printf("too young\n");
         else if(age>=150)
            printf("be realistic\n");
         else
                printf("adult\n");
    }

    return 0;
}
