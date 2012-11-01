#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char original[] = "smiles";
	char copycat[] = "miles";
	int check_copy;

	printf("source=%s, target=%s\n", original, copycat);
	check_copy = strcmp(original, copycat);

	if (check_copy == 0) {
		printf("Catch you!\n");
	} else {
		printf("you are safe.\n");
	}
	
	printf("source=%s, target=%s\n", original+1, copycat);
	check_copy = strcmp(original+1, copycat);

	if (check_copy == 0) {
		printf("Catch you!\n");
	} else {
		printf("you are safe.\n");
	}

	return 0;
}
