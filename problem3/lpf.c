#include <stdio.h>
#include <math.h>

int		main(void)
{
		long	lp, i, num, num1;

		lp = 2;
		num = 600851475143;
		num1 = 13195;
		i = 5;
//		while ((num % 2) == 0)
//				num /= 2;
		while (i <= (num))
		{
				if (num % i == 0)
				{
						lp = i;
						num /= i;
				}
				i += 2;
		}
		printf("%ld", lp);
		return 0;
}
