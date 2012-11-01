#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char string[]="I am a string";

	printf("Print string:%s, its len is %lu\n", string, strlen(string));

	string[5] = '\0';

	printf("Print string:%s, its len is %lu\n", string, strlen(string));

	return 0;
}
