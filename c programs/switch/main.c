#include <stdio.h>
#include <stdlib.h>

int main()
{ int year;
  printf("include your year of study:\n");
  scanf("%d",&year);
  switch(year)
  {
    case 1:
        printf("fresher");
        break;
    case 2:
        printf("sophomore");
        break;
    case 3:
        printf("ancestor");
        break;
    case 4:
        printf("finalist");
        break;
    default:
        printf("invalid number.key in a value between 1 and 4");

  }


    return 0;
}
