#include <stdio.h>

int main(void)
{
    char copy_from[30] = "original_file.txt";
    char copy_to[30] = "copied_file.txt";

    FILE *original = NULL;
    FILE *copy = NULL;

    original = fopen(copy_from, "r");
	
	if(original == NULL){ // file should be checked if it wasn't opened successfully
		printf("File '%s' not found.\n", copy_from);
		return 1;
	}

    char line[500];

	copy = fopen(copy_to, "a+");
    while (fgets(line, sizeof(line), original)) {
        //copy = fopen(copy_to, "a+"); // file unnecessarily opened multiple times
        fprintf(copy, "%s", line);
        //fclose(copy); // file unnecessarily closed multiple times
    }
	fclose(copy);
	
    fclose(original);
    return 0;
}