#include <string.h>
#include <stdio.h>

int main(int argc, const char *argv[])
{
	char first_string[] = "Hello world!";
	char second_string[13];
	
	printf("Before strcpy()\n");
	printf( "First string: %s\n", first_string );
	printf( "Second string: %s\n", second_string );

	strcpy( second_string, first_string );

	printf("After strcpy()\n");
	printf( "First string: %s\n", first_string );
	printf( "Second string: %s\n", second_string );

	return 0;
}
