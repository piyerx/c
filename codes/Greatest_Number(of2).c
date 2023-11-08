#include <stdio.h>
//Created by PiyerX
int main()
{
    int num1, num2;
    
    printf("---- The Greatest of Two Integers ----\n");
    printf("Enter any two integers below \n");
    scanf("%d%d", &num1, &num2);
    
    if(num1==num2)
    printf("Both the numbers are equal!\n");
    else if(num1>num2)
    printf("%d is GREATER!\n", num1);
    else printf("%d is GREATER!\n", num2);
    
    return 0;
}


/**

OUTPUT

---- The Greatest of Two Integers ----
Enter any two integers below 
29
5
29 is GREATER!

*/
