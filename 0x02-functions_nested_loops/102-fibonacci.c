#include <stdio.h>

int main(void)
{
    int num1 = 0, num2 = 1, nextNum;
    int count = 0;

    printf("%d, %d", num1, num2);
    count += 2;

    while (count < 50)
    {
        nextNum = num1 + num2;
        printf(", %d", nextNum);
        num1 = num2;
        num2 = nextNum;
        count++;
    }

    printf("\n");

    return 0;
}
