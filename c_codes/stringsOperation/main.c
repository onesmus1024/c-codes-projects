#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{
    char name  = "m";
    printf("string test!\n");
    if(isalpha(name)){
        printf("it is alphabets");
        printf(name);
    }
    else{
        printf("not alphabet");
    }
    return 0;
}
