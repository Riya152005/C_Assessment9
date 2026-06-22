#include <stdio.h>
int main()
{
    int n, i, carry = 0, a[50], b[51];
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = n - 1; i >= 0; i--)
    {
        b[i + 1] = (a[i] + carry) % 10;
        carry = (a[i] + carry) / 10;
    }
    b[0] = carry;
    printf("Result:\n");
    if(b[0] != 0)
    {
        printf("%d ", b[0]);
    }
    for(i = 1; i <= n; i++)
    {
        printf("%d ", b[i]);
    }
}
