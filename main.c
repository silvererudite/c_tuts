#include <stdio.h>

int main() {
    int someRandomNum = 5;
    printf("Hello, World! %i \n", someRandomNum);

    char randomChar = 60;
    printf("Omg a char %c \n", randomChar);
    printf("Omg the char %d \n", randomChar);

    int x[50];
    x[0] = 5;
    printf("first val %d \n", x[0]);
    printf("random val in the array %d \n", x[15]);

    struct person {
        //char name[50];
        int age;
        int height;
    };

    struct person shamima;
    //shamima.name = "elma";
    shamima.age = 19;

    //printf("oooh na na what's mah name %s", shamima.name);

    if(-2) printf("omg \n");

    printf("Size of %zu \n", sizeof(someRandomNum));
    printf("Size of %zu \n", sizeof(randomChar));

    int anIntVal = 43;
    int *someIntVar = &anIntVal;
    printf("its storing an %i \n", *someIntVar);

    return 0;
}
