#include <stdio.h>
extern void ft_putchar();

void rush (int x, int y)
{
	int n;
	int m;
	
	n = 0;
	m = 0;
	ft_putchar('o');
	if(x - 2 >= 0)
	{
		while(x - 2 > n++)
			ft_putchar('-');
		ft_putchar('o');
		n = 0;
	}
	ft_putchar('\n');
	if(y - 2 >= 0)
	{
		while(y - 2 > m++)
		{
			ft_putchar('|');
			while(x - 2 > n++)
				ft_putchar(' ');
			if(x != 1)
				ft_putchar('|');
			ft_putchar('\n');
			n = 0;
		}
	}
	ft_putchar('o');
	if(x - 2 >= 0)
	{
		while(x - 2 > n++)
			ft_putchar('-');
		ft_putchar('o');
	}
}
