#include <stdio.h>
#include <string.h> // include was missing
#include <stdlib.h> // new required include

int main(void)
{
    char *buffer = NULL; // pointer wasn't nullified
	
	// missing memory allocation and deallocation
	buffer = (char* )malloc(sizeof(char)*20);
	if(buffer != NULL){
		strcpy(buffer, "Some random text");
    	printf("%s\n", buffer);
		free(buffer);
		return 0;
	}
    else{
		return 1;
	}
}