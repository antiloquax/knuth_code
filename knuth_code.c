/* Based on program and exercise 7 in section 1.4.2. */
#include <stdio.h>
#include <ctype.h>

int main()
{
    int i, j, count = 0;
    char ch, spc = ' ', end = '.';
    
    printf("*** Knuth Exercise ***\n");
    printf("Enter string: ");
    
    /* Read the input, stop if we get to 'end'. */
    while ((ch = getchar()) != end)
    {
        i = 1;
        if (ch >= '0' && ch <= '9'){
            /* Use offset between '0' and a digit to increment i.*/
            i += ch - '0';
            /* Exit the loop if we find 'end'. */
            if ((ch = getchar()) == end)
                break;
        }
        
        /* Loop i times and print the character. */
        for (j = 0; j < i; j++){
            putchar(toupper(ch));
            /* Add spaces after every three characters. */
            if (!(++count % 3))
                putchar(spc);
        }
    }
    
    /* Print final character. */
    printf("%c\n", ch);
    return 0;
}

