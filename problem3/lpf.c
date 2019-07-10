/*
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
*/

#include <stdio.h>
#include <math.h>

int	main(void)
{
	long	lp, i, num;

	lp = 2;
	num = 600851475143;
	i = 5;
	while ((num % 2) == 0)
		num /= 2;
	while (i <= (num))
	{
		if (num % i == 0)
		{
			lp = i;
			num /= i;
		}
		i += 2;
	}
	printf("%ld\n", lp);
	return 0;
}
