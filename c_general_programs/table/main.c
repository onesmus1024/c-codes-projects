#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kg=1;
    float weight_of_the_moon,gravity_of_the_moon;
    printf("weight_of_the_moon\n");
    while(kg<101)
      {
        printf(" _____\n");
        printf("  %d\n",kg);
        printf("|_____|\n");
        gravity_of_the_moon=0.17*10;
        weight_of_the_moon=kg*gravity_of_the_moon;
        printf(" __________________\n");
        printf(" %f\n",weight_of_the_moon);
        printf("|__________________|\n");
        kg=kg+20;
      }
}
