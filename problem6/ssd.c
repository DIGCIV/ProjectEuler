/*
 *The sum of the squares of the first ten natural numbers is, 1^2 + 2^2 + ... + 10^2 = 385
 *The square of the sum of the first ten natural numbers is, (1 + 2 + ... + 10)^2 = 55^2 = 3025
 *Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is
 *3025 − 385 = 2640.
 *Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <stdio.h>

int		main()
{
		int		s1, s2, i, res;

		s1 = 0;
		s2 = 0;
		i = 1;
		while (i <= 100)
		{
				s1 = s1 + i * i;
				s2 = s2 + i;
				i++;
		}
		s2 = s2 * s2;
		res = s2 - s1;
		printf("%d\n", res);
		return 0;
}
