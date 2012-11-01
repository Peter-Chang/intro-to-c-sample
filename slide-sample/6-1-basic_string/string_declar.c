#include <stdio.h>

int main(int argc, const char *argv[])
{
	char string[14]="I am a string";
	char undef_len_string[]="I am also a string";
	char s[];

	printf("Print string:%s\n", string);
	printf("Print string:%s, %lu\n", undef_len_string, sizeof(undef_len_string));

	printf("\nPrint first char of string:%c\n", string[0]);

	for (int i = 0; i < 14; i++) {
		printf("No. %d char of string is %c\n", i, string[i]);
	}

	return 0;
}
