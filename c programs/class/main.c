#include <stdio.h>
 main()
{
    int length,width,area,perimeter;
    printf("enter width:\n");
    scanf("%d",&width);
    printf("enter length:\n");
    scanf("%d",&length);
    area=(length * width);
    perimeter= width + length+width + length;
    printf("area is %d\n",area);
    printf("perimeter is %d",perimeter);
    return 0;
}
