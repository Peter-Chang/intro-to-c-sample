#include <stdio.h>

int main(int argc, const char *argv[])
{
	char output[100]={};
	int var=66;

	printf("output=%s\n", output);
	sprintf(output, "hello, I can type number %d. And I can also type variable %d", 55, var);
	printf("output=%s\n", output);

	return 0;
}
