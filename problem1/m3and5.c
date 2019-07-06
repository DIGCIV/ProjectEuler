#include <stdio.h>

int		main(void)
{
		int		sum, i;

		sum = 0;
		i = 0;
		while (i < 1000)
		{
				if ((i % 3) == 0 || (i % 5) == 0)
				sum = sum + i;
				i++;
		}
		printf("%d", sum);
}
