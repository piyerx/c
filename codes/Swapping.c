#include <stdio.h>
//Created by PiyerX
int main()
{
    int num1, num2;
    
    printf("---- SWAP Values ----\n");
    printf("Enter two numbers below \n");
    scanf("%d %d", &num1, &num2);
    
    printf("\n");
    printf("Swapping Complete!\n");
    printf("Original values: \nnum1 = %d | num2 = %d \n", num1,num2);
    
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    
    printf("Swapped values: \nnum1 = %d | num2 = %d \n", num1,num2);
    
    return 0;
}



/**
OUTPUT

---- SWAP Values ----
Enter two numbers below 
29 5

Swapping Complete!
Original values: 
num1 = 29 | num2 = 5 
Swapped values: 
num1 = 5 | num2 = 29 

*/
