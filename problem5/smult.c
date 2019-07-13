/*
 *2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 *What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <stdio.h>

int		main()
{
		int		num, mod, flag;

		num = 1;
		mod = 1;
		flag = 0;
		while (flag < 20)
		{
				flag = 0;
				while (mod <= 20)
				{
						if ((num % mod) == 0)
								flag++;
						else
								break;
						mod++;
				}
				mod = 1;
				num++;
		}
		printf("%d\n", num - 1);
		return 0;
}
