#include <stdio.h>
#include <cs50.h>


int main(void)
{
    long number = get_long("Number:");

    if (number >= 1000000000000000 && number < 10000000000000000) //to check number of digits
    {
        int n = 16;
        int digits[n]; //create an array the length of the number of digits
        for (long i = 1; i < n+1; i++)
        {
            digits[i] = number % 10; //get the last digit and add it to the array
            number = (number - digits[i]) / 10; //divide the number by 10 to get the second last digit on the next go

        }
        int checksum = 0;
        for (long i = 2; i < n + 1; i = i + 2) //for every other number, starting at the second number
        {
            if ((digits[i] * 2) > 9)
            {
                checksum = checksum + ((digits[i] * 2) % 10) + (((digits[i] * 2)/10) %
                10); //if value is two digits, then separate the digits and add them
            }
            else
            {
                checksum = checksum + (digits[i] * 2);
            }
        }
        for (long i = 1; i < n + 1; i = i + 2)
        {
            checksum = checksum + digits[i]; //add the value of the digit in this space to checksum
        }
        if (checksum % 10 == 0) //making sure that the value ends in 0
        {
            if (digits[16] == 4)
            {
                printf("VISA\n");
            }
            else if (digits[16] == 5 && digits[15] > 0 && digits[15] < 6)
            {
                printf("MASTERCARD\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }

    else if (number >= 100000000000000 && number < 1000000000000000)
    {
        int n = 15;
        int digits[n];
        for (long i = 1; i < n+1; i++)
        {
            digits[i] = number % 10;
            number = (number - digits[i]) / 10;

        }
        int checksum = 0;
        for (long i = 2; i < n + 1; i = i + 2)
        {
            if ((digits[i] * 2) > 9)
            {
                checksum = checksum + ((digits[i] * 2) % 10) + (((digits[i] * 2) / 10) % 10);
            }
            else
            {
                checksum = checksum + (digits[i] * 2);
            }
        }
        for (long i = 1; i < n + 1; i = i + 2)
        {
            checksum = checksum + digits[i];
        }
        if (checksum % 10 == 0)
        {
            if (digits[15] == 3)
            {
                if (digits[14] == 4 || digits[14] == 7)
                {
                   printf("AMEX\n");
                }
                else
                {
                   printf("INVALID\n");
                }
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if (number >= 1000000000000 && number < 10000000000000)
    {
        int n = 13;
        int digits[n];
        for (long i = 1; i < n + 1; i++)
        {
            digits[i] = number % 10;
            printf("%i", digits[i]);
            number = (number- digits[i]) / 10;

        }
        int checksum = 0;
        for (long i = 2; i < n + 1; i = i + 2)
        {
            if ((digits[i] * 2) > 9)
            {
                checksum = checksum + ((digits[i] * 2) % 10) + (((digits[i] * 2) / 10) % 10);
            }
            else
            {
                checksum = checksum + (digits[i] * 2);
            }
        }
        for (long i = 1; i < n + 1; i = i + 2)
        {
            checksum = checksum + digits[i];
        }
        if (checksum % 10 == 0)
        {
            if (digits[13] == 4)
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}