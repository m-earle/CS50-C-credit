#include <stdio.h>
#include <cs50.h>

void pyramid(int n); //function that makes a hash
void space(int n); //function that makes a space

int main(void)
{
    int height = 0;
    while (height < 1 || height > 8) //ensure that user input falls between 1 and 8
    {
        height = get_int("Height:");
    }
    for (int i = 1; i < height + 1; i++) //start at 1, while height is less than height+1, then increment i by 1
    {
        space(height - i);
        pyramid(i);
        printf("  ");
        pyramid(i);
        printf("\n");
    }
}

void pyramid(int n)
{
    for (int i = 0; i < n; i++) //takes an integer (n) as input, start at 0 and add 1 each time, and do as many times as n
    {
        printf("#");
    }
}

void space(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}