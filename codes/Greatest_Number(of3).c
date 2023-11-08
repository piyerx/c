#include <stdio.h>
//Created by PiyerX
int main()
{
    int num1, num2, num3;
    int max=0;
    printf("---- The Greatest of Three Integers ----\n");
    printf("Enter any three integers below \n");
    scanf("%d%d%d", &num1, &num2, &num3);
    
    if (num1 > num2) 
    {
        if (num1 > num3) 
        max = num1;
        else 
        max = num3;
    } 
    else 
    {
        if (num2 > num3)
        max = num2;
        else
        max = num3;
    }
    
    printf("The Greatest Number is %d", max);
    
    return 0;
}


/**
OUTPUT

---- The Greatest of Three Integers ----
Enter any three integers below 
29 5 4
The Greatest Number is 29

*/
