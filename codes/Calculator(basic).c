#include <stdio.h>
//Created by PiyerX
int main()
{
    printf("---- CALCULATOR(basic) ----\n");
    float n1,n2;
    char optr;
    
    printf("First number =");
    scanf ("%f", &n1);
    printf("Second number =");
    scanf ("%f", &n2);
    printf("Input the Operator for Calculation\n");
    printf("+ OR - OR / OR x\n");
    scanf(" %c", &optr);
    
    switch(optr)
    {
        case '+' : printf("%f %c %f = %f", n1, optr, n2, (n1+n2));
        break;
        case '-' : printf("%f %c %f = %f", n1, optr, n2, (n1-n2));
        break;
        case '/' : printf("%.2f %c %.2f = %.2f", n1, optr, n2, (n1/n2));
        break;
        case 'x' : printf("%f %c %f = %f", n1, optr, n2, (n1*n2));
        break;
        default : printf("Invalid Input!\n");
    }
    return 0;
}


/**

> OUTPUT 1
---- CALCULATOR(basic) ----
First number = 29
Second number = 5
Input the Operator for Calculation
+ OR - OR / OR x
/
29.00 / 5.00 = 5.80

> OUTPUT 2
---- CALCULATOR(basic) ----
First number = 20
Second number = 4
Input the Operator for Calculation
+ OR - OR / OR x
!
Invalid Input!

*/
