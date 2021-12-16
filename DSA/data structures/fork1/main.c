#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{

fork();
printf("hello\n");
fork();
printf("hello\n");
fork();
return 0;
}
