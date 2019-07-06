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
