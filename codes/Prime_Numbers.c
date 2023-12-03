//506979757368
#include <stdio.h>
//Created by PiyerX
int main ()
{
    int num, primeCheck = 0;
    printf("Enter any positive number to check if its a prime number\n");
    scanf("%d", &num);

    num = (num>0)?num:(-num); //handles negative inputs
    for (int i=2; i<=num; i++)
    {
        if (num%i == 0)
        primeCheck++;
    }
    
    if(primeCheck == 1)
    printf("The number %d is a PRIME Number!\n", num);
    else 
    printf("The number %d is NOT a PRIME Number\n", num);
    
    return 0;
}


/*

OUTPUT
Enter any positive number to check if its a prime number
2905
The number 2905 is NOT a PRIME Number

Enter any positive number to check if its a prime number
-997
The number 997 is a PRIME Number!

*/
