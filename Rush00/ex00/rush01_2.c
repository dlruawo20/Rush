#include <stdio.h>
extern void ft_putchar();

void rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	ft_putchar('/');
	if(x - 2 >= 0)
	{
		while(i < x - 2)
		{
			ft_putchar('*');
			i++;
		}
		ft_putchar('\\');
	}
	ft_putchar('\n');
	i = 0;
	if(y - 2 >= 0)
	{
		while( i < y - 2)
		{
			ft_putchar('*');
			while(j < x - 2)
			{
				ft_putchar(' ');
				j++;
			}
			if(x != 1)
				ft_putchar('*');
			ft_putchar('\n');
			i++;
		}
		ft_putchar('\\');
		i = 0;
		if(x - 2 >= 0)
		{
			while(i < x - 2)
			{
				ft_putchar('*');
				i++;
			}
			ft_putchar('/');
		}
		ft_putchar('\n');
	}
}	
