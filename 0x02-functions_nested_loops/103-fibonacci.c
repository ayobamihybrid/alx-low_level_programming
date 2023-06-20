#include <stdio.h>

int main(void)
{
    int num1 = 1, num2 = 2, nextNum;
    long long int sum = 2;  // Start with sum = 2 since num2 is even
    const int limit = 4000000;

    while (num2 <= limit)
    {
        nextNum = num1 + num2;
        if (nextNum % 2 == 0)
        {
            sum += nextNum;
        }
        num1 = num2;
        num2 = nextNum;
    }

    printf("%lld\n", sum);

    return 0;
}
