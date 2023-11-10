#include <stdio.h>
//Created by PiyerX
int main()
{
    printf("---- SUM and PRODUCT of n Numbers ----\n");
    int num;
    int sum = 0;
    int prod = 1;
    printf("Enter any natural number (n)\n");
    scanf("%d", &num);
    
    if(num>=0)
    {
        for(int i=1; i<=num; i++)
        {
            sum += i;
            prod *= i;
        }
        printf("SUM of all numbers till %d = %d\n", num, sum);
        printf("PRODUCT of all numbers till %d = %d\n", num, prod);
    }
    else printf("Invalid Input! Only Natural Numbers Supported.\n");
    return 0;
}



/**

> OUTPUT 1
---- SUM and PRODUCT of n Numbers ----
Enter any natural number (n)
5
SUM of all numbers till 5 = 15
PRODUCT of all numbers till 5 = 120

> OUTPUT 2
---- SUM and PRODUCT of n Numbers ----
Enter any natural number (n)
-2004
Invalid Input! Only Natural Numbers Supported.

*/
