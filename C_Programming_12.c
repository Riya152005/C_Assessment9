#include <stdio.h>
int main()
{
    int a[100], i=0, sum=0;
    printf("Enter numbers:\n");
    scanf("%d", &a[i]);
    while(a[i] != 0)
    {
        sum = sum + a[i];
        i++;
        scanf("%d", &a[i]);
    }
    printf("Total numbers entered = %d\n", i);
    printf("Sum = %d", sum);
}
