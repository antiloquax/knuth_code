/* Knuth decoder. */
#include <stdio.h>

int main()
{
    char ch, next;
    int count;
    char spc = ' ';
    char end = '.';
    
    printf("*** Knuth Decoder ***\n");
    printf("Enter your string: ");
    
    /* Skip initial spaces. */
    while ((ch = getchar()) == spc)
        ;
        
    /* Loop over rest of input, until we get to "end". */
    while (ch != end)
    {
        count = 0;
        /* Skip spaces, check for duplicates, update count. */
        while ((next = getchar()) == ch || next == spc)
            if (next == ch)
                count++;
      
        /* Print count if > 0. */
        if (count)
            putchar('0' + count);
        
        /* Output the character. */
        putchar(ch);
        
        /* Update ch to last character read. */
        ch = next;
    }
    
    /* Print final charcter. */
    printf(".\n");
    return 0;
}

