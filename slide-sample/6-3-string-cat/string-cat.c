#include <string.h>
#include <stdio.h>

int main(int argc, const char *argv[])
{
	char first_string[30] = "Hello world! ";
	char second_string[30] = "I am from strcat.";
	
	printf("Before strcpy()\n");
	printf( "First string: %s\n", first_string );
	printf( "Second string: %s\n", second_string );

	strcat(first_string, second_string);

	printf("After strcpy()\n");
	printf( "First string: %s\n", first_string );
	//printf( "Second string: %s\n", second_string );

	return 0;
}
