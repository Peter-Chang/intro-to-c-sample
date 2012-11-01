#include <stdio.h>

int main(int argc, const char *argv[])
{
	char string[6];

	printf("string: %s\n", string);

	string[0] = 'h';
	string[1] = 'e';
	string[2] = 'l';
	string[3] = 'l';
	string[4] = 'o';
	string[5] = '\0';

	printf("string: %s\n", string);

	char empty_string[10];
	scanf("%s", &empty_string);

	printf("string: %s\n", empty_string);

	return 0;
}
