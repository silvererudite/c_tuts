#include <stdio.h>

int someFunc(void);

int main(){
    int someRandomNumber = someFunc();
    printf("Function value: %d \n", someRandomNumber);
}

int someFunc(void){
    return 123;
}