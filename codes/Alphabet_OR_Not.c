#include <stdio.h>
//Created by PiyerX
int main()
{
    printf("---- alphabet or ALPHABET ? ----\n");
    char ch;
    printf("Enter any character below\n");
    scanf("%c", &ch);
    
    if(ch<=90 && ch>=65)
    printf("%c is an UPPERCASE Alphabet\n", ch);
    else if (ch>=97 && ch<=122)
    printf("%c is an lowercase Alphabet\n", ch);
    else printf("%c is not an Alphabet\n", ch);
    
    return 0;
}


/**

> OUTPUT 1
---- alphabet or ALPHABET ? ----
Enter any character below
P
P is an UPPERCASE Alphabet

> OUTPUT 2
---- alphabet or ALPHABET ? ----
Enter any character below
5
5 is not an Alphabet

*/
