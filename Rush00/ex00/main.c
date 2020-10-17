#include <stdio.h>
extern void rush();
int main()
{
	rush(5, 3);
	printf("\n\n");
	rush(5, 1);
	printf("\n\n");
	rush(1, 1);
	printf("\n\n");
	rush(1, 5);
	printf("\n\n");
	rush(4, 4);
	printf("\n\n");

	return 0;
}
