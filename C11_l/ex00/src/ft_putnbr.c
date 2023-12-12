#include "../header.h"
#include <unistd.h>

void	ft_putnbr(int num)
{
	char	c;

	if (num  == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (num < 0)
		{
			num *= -1;
			write(1, "-", 1);
		}
		if (num >= 10)
			ft_putnbr(num / 10);
		c = '0' + num % 10;
		write(1, &c, 1);
	}
}
