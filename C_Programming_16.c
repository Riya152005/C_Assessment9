#include <stdio.h>
int main()
{
    int a[50], b[50], c[51], i, sum, carry = 0;
    printf("Enter first 50-digit number:\n");
    for(i = 0; i < 50; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter second 50-digit number:\n");
    for(i = 0; i < 50; i++)
    {
        scanf("%d", &b[i]);
    }
    for(i = 49; i >= 0; i--)
    {
        sum = a[i] + b[i] + carry;
        c[i + 1] = sum % 10;
        carry = sum / 10;
    }
    c[0] = carry;
    printf("Result:\n");
    for(i = 0; i < 51; i++)
    {
        printf("%d", c[i]);
    }
}
