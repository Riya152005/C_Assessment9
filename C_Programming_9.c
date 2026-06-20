#include <stdio.h>
int main()
{
    int i, j = 0, b[5], a[5];
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 5; i++)
    {
        if(a[i] % 2 != 0)
        {
            b[j] = a[i];
            j++;
        }
    }
    printf("New array:\n");
    for(i = 0; i < j; i++)
    {
        printf("%d ", b[i]);
    }
}
