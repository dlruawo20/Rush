#include <stdio.h>
#include <unistd.h>

void rush(int row, int col);

int main()
{
	rush(4, 4);
	return 0;
}

void rush(int row, int col)
{
	char arr[col][row];
	char nl;
	int i;
	int j;

	nl = '\n';
	i = 0;
	while(i < col)
	{
		j = 0;
		while(j < row)
		{
			if(i == 0)
			{
				if(j == 0) 
					arr[i][j] = '/';
				else if(j == row-1)
					arr[i][j] = '\\';
				else
					arr[i][j] = '*';
			}
			else if(i == col-1)
			{
				if(j == 0)
					arr[i][j] = '\\';
				else if(j == row-1)
					arr[i][j] = '/';
				else
					arr[i][j] = '*';
			}
			else if((i > 0 && i < col-1) && (j == 0 || j == row-1))
				arr[i][j] = '*';
			else
				arr[i][j] = ' ';
			j++;
		}
		i++;
	}

	i = 0;
	while(i < col)
	{
		j = 0;
		while(j < row)
		{
			write(1, &arr[i][j], 1);
			j++;
		}
		write(1, &nl, 1);
		i++;
	}
}
