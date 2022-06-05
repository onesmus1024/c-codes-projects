#include <stdio.h>
#include <stdlib.h>

int main()
{
   int kg,weight;
   weight=kg*10;
   while(kg<=200)
   {
       printf("my kg is %d\nand its equivalent weight %d\n",kg,weight);
       kg+=20;
   }

    return 0;
}
