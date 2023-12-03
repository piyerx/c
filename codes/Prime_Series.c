//506979757368
#include <stdio.h>
//Created by PiyerX
int main ()
{
    int num;
    printf("Enter the last limit for the Prime Number series\n");
    scanf("%d", &num);
    
     for (int i=1; i<=num; i++) 
     {
        int primeCheck = 1;
        for (int j=2; j<=i/2; j++) 
        {
            if (i%j == 0) 
            {
                primeCheck = 0;
                break;
            }
        }
        if (primeCheck)
        {
            printf("%d ", i);
        }
    }
    return 0;
}

/*

OUTPUT
Enter the last limit for the Prime Number series
29
1 2 3 5 7 11 13 17 19 23 29 

*/
