#include<cs50.h>
#include<stdio.h>

int main(void)

{
    printf("Minutes: ");
    int x = get_int();

    int y = (x * 12);
    printf("Bottles: %i\n", y);

}