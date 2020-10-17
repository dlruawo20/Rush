#include <stdio.h>
extern void ft_putchar();

void rush(int x, int y)
{
	int n;
	int m;

	n = 0;
	m = 0;
	while(n < y)
	{
		while(m < x)
		{
			if((n == 0 && m == 0) || (n == y-1 && m == x-1 && x != 1 && y != 1))
			{
				ft_putchar('/');
				m++;
			}
			else if((n == 0 && m == x-1) || (n == y-1 && m == 0))
			{
				ft_putchar('\\');
				m++;
			}
			else if(n == 0 || n == y-1 || m == 0 || m == x-1)
			{
				ft_putchar('*');
				m++;
			}
			else
			{
				ft_putchar(' ');
				m++;
			}
		}
		ft_putchar('\n');
		n++;
		m = 0;
	}
}
