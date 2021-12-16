#include <stdio.h>
#include <stdlib.h>

#define max 5

struct stack{
    int items[max];
    int top;
};
int count=0;
typedef struct stack st;
void create_empty_stack(st * s){
    s->top=-1;
}
int IsFull(st * s)
{
    if(s->top==max-1){
        return 1;
    }
    else{
        return 0;
    }
}
int IsEmpty(st * s){
    if(s->top ==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(st * s,int item){
    if(IsFull(s)){
        printf("STACK IS FULL\n");
    }
    else{
        printf("INSERTING %d\n",item);
        s->top++;
        s->items[s->top]=item;

        count++;
    }
}

void pop(st * s){
    if(IsEmpty(s)){
        printf("STACK IS EMPTY\n");
    }
    else{
        printf("REMOVING %d\n",s->items[s->top]);
        s->top--;
        count--;
    }
}

void printstack(st * s){
    for(int i =0;i<count;i++){
        printf("item %d is %d\n",i,s->items[i]);
    }
}

int main()
{
    st * s =(st*)malloc(sizeof(st));
    create_empty_stack(s);
    push(s,3);
    push(s,2);
    push(s,3);
    push(s,4);
    push(s,5);
    printstack(s);
    pop(s);


    return 0;
}
