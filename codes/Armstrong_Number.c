#include <stdio.h>
#include <math.h>
//Created by PiyerX
int main()
{
    int num,digits = 0;
    int arm=0;
    printf("Enter any positive number below \n");
    scanf("%d", &num);
    
    int org=num; //To keep the original value stored safely.
    int temp=num;
    
    while (temp!=0)
    {
        temp=temp/10;
        digits++;
    }
    
    while (num>0)
    {
        temp = num %10;
        arm = arm + pow(temp,digits);
        num = num/10;
    }
    
    if(arm==org)
    printf("%d is an Armstrong Number!\n", org);
    else printf("%d is not an Armstrong Number :(\n", org);
    
    return 0;
}


/**

> OUTPUT case 1
Enter any positive number below 
1634
1634 is an Armstrong Number!

> OUTPUT case 2
Enter any positive number below 
2905
2905 is not an Armstrong Number :(

*/
