#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	int count;
	int i;
	for (i = 0; i < n; ++i)
	{
		int t;
		scanf("%d ", &t);

		if (t < 0) {
			++count;
		}
	}
	printf("%d ", count);
}


