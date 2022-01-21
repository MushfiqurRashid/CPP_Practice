#include <stdio.h>
#include <stdlib.h>
#define capacity 4

int stack[capacity];
int topVal =-1;

int push(int a){
    if(topVal < capacity -1){
        topVal = topVal +1;
        stack[topVal]=a;
        printf("Entered value is %d\n",a);
    }
    else printf("Excaption in push . no space");


}

int pop(){
    if(topVal>=0){
        int val = stack[topVal];
        topVal = topVal-1;
        return val;
    }
    printf("Exception in pop.");

return -1;
}

int peek(){
    if(topVal>=0){
        return stack[topVal];
    }
    printf("Exception");
    return -1;

}


int main()
{

    push(10);
    push(25);
    push(30);
    printf("pop item :%d\n",pop());
    push(40);
    printf("peek item :%d\n",peek());
    push(50);
    printf("peek item :%d\n",peek());
    return 0;
}
