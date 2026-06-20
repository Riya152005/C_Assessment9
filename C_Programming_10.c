#include <stdio.h>
int main()
{
    int a[5], b[5], i, j, k = 0, prime;
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 5; i++)
    {
        prime = 1;
        if(a[i] <= 1)
        {
            prime = 0;
        }
        else
        {
            for(j = 2; j < a[i]; j++)
            {
                if(a[i] % j == 0)
                {
                    prime = 0;
                }
            }
        }
        if(prime == 0)
        {
            b[k] = a[i];
            k++;
        }
    }
    printf("New array:\n");
    for(i = 0; i < k; i++)
    {
        printf("%d ", b[i]);
    }
}
