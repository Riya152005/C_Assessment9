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
    if(i == 4 && a[0] == a[3])
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
}
