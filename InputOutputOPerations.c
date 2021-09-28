#include<stdio.h>

int main()
{
    //Declaring variables
    int radius;
    int height;
    int area;
    printf("Please enter the radius:");
    scanf("%d", &radius);
    printf("Please enter value of the height:");
    scanf("%d", &height);
    area = radius*height;

    printf("The area of the container is %d\n", area);
    return 0;
}