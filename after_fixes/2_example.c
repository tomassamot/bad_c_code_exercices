#include <stdio.h>
#include <string.h>

int main(void)
{
    //char buffer[20]; // buffer isn't big enough for the incoming text
	char buffer[40];
    strcpy(buffer, "Copy this text to the buffer variable");
    printf("%s\n", buffer);
    return 0;
}