#include <stdio.h>

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	int quadrant = 0;
	
	if (x > 0 && y > 0)
		quadrant = 1;
	else if (x < 0 && y > 0)
		quadrant = 2;
	else if (x < 0 && y < 0)
		quadrant = 3;
	else if (x > 0 && y < 0)
		quadrant = 4;
	
	printf("%d\n", quadrant);
}
