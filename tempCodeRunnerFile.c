#include<stdio.h>

int main()
{
    //Declaring variables
    int radius;
    int height;
    int area;
    //Prompting User to enter radius and height
    printf("Please enter the radius:");
    scanf("%d", &radius);
    printf("Please enter value of the height:");
    scanf("%d", &height);
    //Calcuating the area of the container
    area = radius*height;
    //Printing the area of the container
    printf("The area of the container is %d\n", area);
    return 0;
}