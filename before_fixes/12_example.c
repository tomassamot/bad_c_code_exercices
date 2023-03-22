#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *user_input;
    printf("Enter your text: ");
    fscanf(stdin, "%[^\n]", user_input);
    printf("\nYour line -> %s\n", user_input);
    return 0;
}