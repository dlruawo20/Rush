#include <stdio.h>
#include <unistd.h>

void rush(char x, char y)
{
	write(1, &x, 1);
	write(1, &y, 1);
}

int main()
{
	rush('a', 'b');
	return 0;
}
