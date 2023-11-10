#include <stdio.h>
//Created by PiyerX
int main()
{
    int num,check = 0;
    int dig_one, dig_two, dig_three;
    int revnum;
    printf("Enter any 3 digit positive number below \n");
    scanf("%d", &num);
    
    int x=num;
    while (x!=0)
    {
        x=x/10;
        check++;
    }
    
    if (check==3)
    {
        dig_one = num%10;
        num = num/10;
        dig_two = num%10;
        num = num/10;
        dig_three = num%10;
        
        revnum = dig_one*100 + dig_two*10 + dig_three;
        printf("Reversed Number = %d\n", revnum);
    }
    else printf("Input number is of %d digit(s) and not 3!\n", check);
    return 0;
}





/**

> OUTPUT (case 1)
Enter any 3 digit positive number below 
295
Reversed Number = 592

> OUTPUT (case otherwise)
Enter any 3 digit positive number below 
2905
Input number is of 4 digit(s) and not 3!

*/
