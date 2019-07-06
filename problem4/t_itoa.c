#include <stdio.h>
#include <stdlib.h>

char	*t_strrev(char *str)
{
		int		i, len;
		char	*buf;

		i = 0;
		len = strlen(str) - 1;
		buf = (char*)malloc(sizeof(char) * strlen(str) + 1);
		while (str[i] != '\0')
		{
				buf[len] = str[i];
				i++;
				len--;
		}
		buf[i] = '\0';
		return (buf);
}

char	*t_itoa(int num, char *str, int base)
{
		int		i, j;
		char	*bstr;

		bstr = "0123456789";
		i = 0;
		while ((num / base) >= 0)
		{
				if ((num / base) == 0 && (num % base) == 0)
						break;
				j = 0;
				while (bstr[j] != '\0')
				{
						if ((num % base) == (bstr[j] - '0'))
										str[i] = bstr[j];
								j++;
				}
				num = num / base;
				i++;
		}
		str[i] = '\0';
		str = t_strrev(str);
		return (str);
}
