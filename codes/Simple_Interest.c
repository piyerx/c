#include <stdio.h>
//Created by PiyerX
int main()
{
    float prcpl, rate, time;
    
    printf("---- Simple Interest Calculator ---- \n");
    printf("Enter the PRINCIPLE amount \n");
    scanf("%f", &prcpl);
    printf("Enter the TIME period \n");
    scanf("%f", &time);
    printf("Enter the RATE of interest \n");
    scanf("%f", &rate);
    
    float si = (prcpl*rate*time)/100;
    float amt = prcpl + si;
    
    printf("\n");
    printf("The calculated SI is %.2f \n", si);
    printf("Total amount = %.2f INR \n", amt);
    
    return 0;
}


/**
OUTPUT

---- Simple Interest Calculator ---- 
Enter the PRINCIPLE amount 
2905
Enter the TIME period 
2
Enter the RATE of interest 
4

The calculated SI is 232.40 
Total amount = 3137.40 INR 

*/
