#include <stdio.h>


void number_printer(int *var)
{
    printf("Number is - %d\n", *var); // asterisk near pointer required to access pointer's value
}

int main(void)
{
    int var = 345;
    number_printer(&var);
    return 0;
}