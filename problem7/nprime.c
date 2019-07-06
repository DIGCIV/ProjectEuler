#include <stdio.h>
#include <math.h>

int		main()
{
		int		i, num, nprime;

		i = 2;
		num = 3;
		nprime = 1;
		while (nprime < 10001)
		{
				while (i < num)
				{
						if (num % i == 0)
								break;
						i++;
				}
				if (i == num)
						nprime++;
				num++;
				i = 2;
		}
		printf("%d\n", num - 1);
		return 0;
}
