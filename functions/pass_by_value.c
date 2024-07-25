#include <stdio.h>

// demonstrating how passing expressions to function arguments is just the copy
void increment(int a){
    a++;
}
int main(){
    int someRandomNumber = 5;
    increment(someRandomNumber);
    printf("After incrementing: %d \n", someRandomNumber);
}