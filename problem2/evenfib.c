#include <stdio.h>

int		main(void)
{
		int		fib, l0, l1, sum;

		l0 = 1;
		l1 = 2;
		sum = 2;
		fib = 0;

		while (fib < 4000000)
		{
				fib = l0 + l1;
				l0 = l1;
				l1 = fib;
				if ((fib % 2) == 0)
						sum = sum + fib;
		}
		printf("%d", sum);
}
