#include <stdio.h>

/* converting ASCII characters to their decimal values
 *  Also converts special characters, including "Space" and "Enter" Keys.
*/
int main(void)
{
    int c;

    printf("Enter a single alpha/numeric character to see the decimal value:\n");
    c = getc(stdin); /* can also use getchar(); without the stdin */

    if (("%c", c) == 10)
    {
        printf("The numeric value of the \"Enter Key\" is %d\n", c, c);
    }
    else if (("%c", c) == 32)
    {
        printf("The numeric value of the \"Space Key\" is %d\n", c, c);
    }
    else
    {
         /* dec = char_to_dec(c); */
        printf("The numeric value of %c is %d\n", c, c);
    }

    return 0;
}
