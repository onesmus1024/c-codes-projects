#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum;
    int k;
    printf("enter number\n");
    scanf("%d",&k);
    int sum_num(int z){
        int sum1 = z*z+1/2;

        return sum1;
    }
    sum = sum_num(k);
    printf("sum is %d",sum);
    return 0;
}
