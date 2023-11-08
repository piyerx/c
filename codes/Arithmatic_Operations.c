#include <stdio.h>
//Created by PiyerX
int main()
{
    int num1, num2;
    
    printf("Enter two integers below \n");
    scanf("%d%d", &num1, &num2);
    
    float div = (float)num1/num2;
    
    printf("%d + %d = %d \n", num1, num2, (num1+num2));
    printf("%d - %d = %d \n", num1, num2, (num1-num2));
    printf("%d x %d = %d \n", num1, num2, (num1*num2));
    printf("%d / %d = %.2f \n", num1, num2, div);
    
    return 0;
}


/**
OUTPUT

Enter two integers below 
29 5
29 + 5 = 34 
29 - 5 = 24 
29 x 5 = 145 
29 / 5 = 5.80 

*/
