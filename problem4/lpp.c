#include <stdio.h>
#include "t_itoa.c"

int		main()
{
		int		max, i, j, p, len, fw, bw, flag;
		char	*str;

		max = 0;
		i = 100;
		j = 100;
		p = 0;
		str = (char*)malloc(sizeof(char)*10);
		while (i <= 999)
		{
				if (j > 999)
				{
						j = 100;
						i++;
				}
				p = i * j;
				str = t_itoa(p, str, 10);
				len = strlen(str);
				printf("%d %s %d\n",p, str, len);
				fw = 0;
				bw = len - 1;
				flag = 0;
				while (fw < len)
				{
						if (str[fw] == str[bw])
								flag++;
						fw++;
						bw--;
				}
				if (flag == len && max < p)
				{
						max = p;
						printf("pal = %s\n", str);
				}
				j++;
		}
		printf("max palindrome = %d\n", max);
		return 0;
}
