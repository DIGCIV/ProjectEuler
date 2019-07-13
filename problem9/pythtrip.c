/*
 *A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
 *a^2 + b^2 = c^2
 *For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
 *There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 *Find the product abc.
*/

#include <stdio.h>

int main()
{
    int m, n;

    m = 2;
    n = 1;
    while (m * (m + n) != 500)
    {
        n++;
        if (n == m)
        {
            m++;
            n = 1;
        }
    }
    printf("%d\n", 2 * m * n * (m * m - n * n) * (m * m + n *n));
    return (0);
}