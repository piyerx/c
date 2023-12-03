//506979757368
#include<stdio.h>
//Created by PiyerX
int main()
{
    int size, srch, flag=1;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d values below \n", size);
    
    //Input Values
    for (int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    
    //Search Any Value
    printf("Enter the value to search\n");
    scanf("%d", &srch);
    for (int i=0; i<size; i++)
    {
        if(srch==arr[i])
        {
            printf("%d was found at position %d\n", srch, (i+1));
            flag = 0;
            break;
        }
    }
    
    if(flag==1)
    printf("%d was not found in the array!\n", srch);
    
    return 0;
}


/*

OUTPUT
Enter the size of the array
5
Enter 5 values below 
10 20 30 40 50
Enter the value to search
40
40 was found at position 4

*/
