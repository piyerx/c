//Program to check the type of a triangle
#include<stdio.h>
//Created by PiyerX
int main()
{
    float side1,side2,side3;
    printf("---- Types Of Triangle ----\n");
    printf("Enter the three sides of the triangle below\n");
    scanf("%f%f%f", &side1, &side2, &side3);
    
    if((side1==side2) && (side2==side3))
    printf("The triangle is Equilateral\n");
    else if ((side1==side2) || (side2==side3) || (side1==side3))
    printf("The triangle is Isosceles\n");
    else printf("The triangle is Scalene\n");
    
    return 0;
}


/**
OUTPUT

---- Types Of Triangle ----
Enter the three sides of the triangle below
29 5 29
The triangle is Isosceles

*/
