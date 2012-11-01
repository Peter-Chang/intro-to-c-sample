#include <string.h>
#include <stdio.h>

int main(int argc, const char *argv[])
{
	char first_string[30] = "Hello world! ";
	char second_string[] = "I am from strcat";
	
	printf("Before strcpy()\n");
	printf( "First string: %s\n", first_string );
	printf( "Second string: %s\n", second_string );

	strncat(first_string, second_string, 5);

	printf("After strcpy()\n");
	printf( "First string: %s\n", first_string );
	printf( "Second string: %s\n", second_string );

	return 0;
}
