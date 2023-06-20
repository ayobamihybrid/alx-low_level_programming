#include <stdio.h>

void print_fibonacci_numbers(int n)
{
    int num1 = 1, num2 = 2, nextNum;
    int count = 2;

    printf("%d, %d", num1, num2);

    while (count < n)
    {
        nextNum = num1 + num2;
        printf(", %d", nextNum);

        num1 = num2;
        num2 = nextNum;

        count++;
    }

    printf("\n");
}

int main(void)
{
    print_fibonacci_numbers(98);

    return 0;
}
