#include <stdio.h>
int main()
{
    int a[100], i = 0;
    printf("Enter numbers (0 to stop):\n");
    scanf("%d", &a[i]);
    while(a[i] != 0)
    {
        i++;
        scanf("%d", &a[i]);
    }
    if(i % 2 != 0)
    {
        printf("Middle number = %d", a[i / 2]);
    }
    else
    {
        printf("Average of middle two numbers = %d",
               (a[(i / 2) - 1] + a[i / 2]) / 2);
    }
}
