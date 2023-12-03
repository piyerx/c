//506979757368
#include <stdio.h>
//Created by PiyerX
int main ()
{
    int size;
    printf("Enter the size of both the arrays below\n");
    scanf("%d", &size);
    int ar1[size];
    int ar2[size];
    
    printf("Enter values in Array 1\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &ar1[i]);
    }
    printf("NOW, Enter values in Array 2\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &ar2[i]);
    }
    printf("Sum of both the arrays: \n");
    for(int i=0; i<size; i++)
    {
        printf("%d\n", (ar1[i]+ar2[i]));
    }
    
    return 0;
}


/*

OUTPUT
Enter the size of both the arrays below/n
5
Enter values in Array 1
2 9 0 5 4
NOW, Enter values in Array 2
1 1 2 4 4
Sum of both the arrays: 
3
10
2
9
8

*/
