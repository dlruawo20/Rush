#include <unistd.h>

void rush(int x, int y)
{
	write(1, &x, 1);
	write(1, &y, 1);
}
