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
				printf("%d %d %d\n", num, mod, flag);
				mod = 1;
				num++;
		}
		printf("%d\n", num - 1);
		return 0;
}
