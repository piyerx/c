#include <stdio.h>
//Created by PiyerX
int main()
{
    int num;
    
    printf("---- EVEN or ODD? ----\n");
    printf("Enter any positive integer below \n");
    scanf("%d", &num);
    
    if(num>=0)
    {
        if(num%2!=0)
        printf("The Number (%d) is ODD", num);
        else 
        printf("The Number (%d) is EVEN", num);
    }
    else
    printf("Invalid Input! Supports only Positive numbers.");
    
    return 0;
}


/**
OUTPUT

---- EVEN or ODD? ----
Enter any positive integer below 
2905
The Number (2905) is ODD

*/
