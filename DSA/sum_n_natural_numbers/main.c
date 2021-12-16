#include <stdio.h>
#include <stdlib.h>

int main()
{

    int k;
    int sum;
    printf("enter natural number to find the sum:\n");

    scanf("%d",&k);

    for(int i=0;i<k;i++){
        sum +=i;
    }
    printf("sum is %d",sum);
    return 0;
}
