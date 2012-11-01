#include <stdio.h>

int main(int argc, const char *argv[])
{
	char input[50] = "Hello, we are 5566....\n";
	char string_1[10], string_2[10], string_3[10];
	int num;

	sscanf(input, "%s%s%s%d", string_1, string_2, string_3, &num);
	
	printf("%s %s %s %d?\n", string_1, string_3, string_2, num);

	return 0;
}
