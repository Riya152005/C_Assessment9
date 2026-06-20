#include <stdio.h>
int main()
{
    int a[100], b[100], i = 0, j, n, sum, temp, k;
    printf("Enter numbers:\n");
    while(1)
    {
        scanf("%d", &a[i]);
        if(a[i] == 0)
        {
            break;
        }
        i++;
    }
    for(j = 0; j < i; j++)
    {
        n = a[j];
        sum = 0;
        while(n > 0)
        {
            sum = sum + n % 10;
            n = n / 10;
        }
        b[j] = sum;
    }
    for(j = 0; j < i - 1; j++)
    {
        for(k = j + 1; k < i; k++)
        {
            if(b[j] > b[k])
            {
                temp = b[j];
                b[j] = b[k];
                b[k] = temp;
            }
        }
    }
    printf("New array:\n");
    for(j = 0; j < i; j++)
    {
        printf("%d ", b[j]);
    }
}
