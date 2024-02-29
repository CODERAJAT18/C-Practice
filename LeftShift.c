#include <stdio.h>

int main(void)
{
    int a, b, result;
    printf("Enter the numbers to be multiplied:");
    scanf("%d%d", &a, &b);       // a > b
    result = 0;
    while (b != 0)               // Iterate the loop till b == 0
    {
        if (b & 1)               // Bitwise & of the value of b with 1
        {
            result = result + a;  // Add a to result if b is odd .
        }
        a <<= 1;                    // Left shifting the value contained in 'a' by 1
                                  // Multiplies a by 2 for each loop
        b >>= 1;                    // Right shifting the value contained in 'b' by 1.
    }

    printf("Result: %d\n",result);
}
