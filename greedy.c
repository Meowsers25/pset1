#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)

{

    float c;
    int x;
    int y;

    do
    {
        printf("O hai! How much change is owed?\n");
        c = get_float();
    }
    while (c < 0);


    y = (int) round(c * 100);


    x = 0;

    // quarters
    x += y / 25;
    y %= 25;

    // dimes
    x += y / 10;
    y %= 10;

    // nickels
    x += y / 5;
    y %= 5;

    // pennies
    x += y;

    printf("%i\n", x);


}
