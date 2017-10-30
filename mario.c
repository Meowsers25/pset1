#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    int i;
    int s;
    int h;

    do
    {
        printf("Height: ");
        n = get_int();
    }
    while (n < 0 || n > 23);

    if (n == 1)
    {
        printf("##\n");
    }
    else if (n > 1)
    {
        for (i = 0; i < n; i++)
        {
            for (s = i; n > (s + 1); s++)
            {
                printf(" ");
            }
            for (h = i; h + 2 > 0; h--)
            {
                printf("#");
            }
            printf("\n");
        }
    }

}