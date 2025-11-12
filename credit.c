#include <cs50.h>
#include <math.h>
#include <stdio.h>

bool luhn(long n);
int num_digits(long n);

int main(void)
{
    // store the CCN in a long, because it will overflow int
    long ccn;

    // we don't want negative values
    do
    {
        ccn = get_long("Number: ");
    }
    while (ccn <= 0);

    // first call Luhn's algorithm to see if it's a valid card
    // printf("luhn: %s\n", luhn(ccn) ? "true" : "false");
    // printf("digits: %i\n", num_digits(ccn));

    // if it fails the check, we may as well stop here
    if (!luhn(ccn))
    {
        printf("INVALID\n");
        return 0;
    }

    // Valid number, now we check the different CC types
    // We'll need the number of digits and the first and second digits
    int nd = num_digits(ccn);
    int fd = ccn / pow(10, nd - 1);
    int sd = ccn / pow(10, nd - 2);
    sd %= 10;
    // Amex has 15 digits and starts with 34 or 37
    if (nd == 15 && fd == 3 && (sd == 4 || sd == 7))
    {
        printf("AMEX\n");
    }
    // Mastercard has 16 digits and starts with 51, 52, 53, 54, or 55
    else if (nd == 16 && fd == 5 && (sd >= 1 && sd <= 5))
    {
        printf("MASTERCARD\n");
    }
    // Visa starts with 4 and has 13 or 16 digits
    else if (fd == 4 && (nd == 13 || nd == 16))
    {
        printf("VISA\n");
    }
    // still invalid if it didn't match one of those
    else
    {
        printf("INVALID\n");
    }
}

// executes Luhn's algorithm on a given long
bool luhn(long n)
{
    int checksum = 0;
    bool doubles = false; // Flag
    while (n > 0)
    {
        int d = n % 10;
        if (doubles)
        {
            // double and add the digits of the result
            d *= 2;
            d = d / 10 + d % 10;
        }
        checksum += d;
        doubles = !doubles;  // Toggle
        n /= 10;
    }
    return checksum % 10 == 0;
}

int num_digits(long n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    return count;
}
