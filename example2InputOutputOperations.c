#include <stdio.h>

int main(){

    char name[100];
    int x;
    int y;

    //Prompt for name
    printf("Enter your name: \n");
    scanf("%s", &name);

    //Prompting Intro Message
    printf("Welcome %s!\n", name);
    printf("Let's do some operations.\n");

    //Prompt for numbers to perform operations on
    printf("Enter the first number: \n");
    scanf("%d", &x);

    printf("Enter the second number: \n");
    scanf("%d", &y);

    //performing operations
    int modulas = (x%y);
    int division = (x/y);
    int additiion = (x+y);
    int multiplication = (x*y);
    int subtraction = (x-y);

    //Print the result of each mathematical operation.
    printf("The addition of %d and %d is %d\n", x, y, additiion);
    printf("The subtraction of %d and %d is %d\n", x, y, subtraction);
    printf("The division of %d and %d is %d\n", x, y, division);
    printf("The modulus of %d and %d is %d\n", x, y, modulas);
    printf("The multiplication of %d and %d is %d\n", x, y, multiplication);

    return 0;
}