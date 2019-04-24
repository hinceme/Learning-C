#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char word[3];
	char x, y, z;

	int a;

	char october[] = "OCT";
	char december[] = "DEC";

	scanf("%s %d", word, &a);
	
	x = word[0];
	y = word[1];
	z = word[2];

	if (x == 'O' && y == 'C' && z == 'T'  && a == 31) {
		printf("yup\n");
	}
	else if (x == 'D' && y == 'E' && z == 'C' && a == 25) {
		printf("yup\n");
	}
	else {
		printf("nope\n");
	}
}
