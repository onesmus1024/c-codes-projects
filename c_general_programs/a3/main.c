#include <stdio.h>
main()
{
    char day;
    printf("s=Sunday\nm=Monday\nt=Tuesday\nw=Wednesday\nh=Thursday\nf=Friday\na=Saturday:\n");
    printf("enter day\n");
    scanf("%c",&day);
    if(day=='s')
        printf("activities are:\nswimming");
    else if(day=='m')
        printf("activities are:\naerobics,chn ups,pull ups");
    else if(day=='t')
        printf("activities are:\ntreadmill,endurance building");
    else if(day=='w')
        printf("activities are:\nbench press,dead-lift,leg curls,incline sit-ups ");
    else if(day=='h')
        printf("activities are:\ndiet treatment and rest");
    else if (day=='f')
        printf("activities are:\naerobics,squats,shoulder press");
    else if(day=='a')
        printf("activities are:\nblocks and weights,muscle building");
    else
        printf("invalid input");
    return 0;
}
