#include <stdio.h>

int main(void){
    int someRandomInt = 6;
    int *pointerToRandomInt = &someRandomInt;

    printf("value of someRandomInt: %d\n", someRandomInt);
    printf("value of pointer to some random int %p\n", pointerToRandomInt);
}