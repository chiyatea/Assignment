#include <stdio.h>
int main()
{
    int n, i, temp;
    printf("enter the size of array\n");
    scanf("%d", &n);
    int num[n];
    printf("enter %d the elements of array\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < n / 2; i++)
    {
        temp = num[i];
        num[i] = num[n - 1 - i];
        num[n - 1 - i] = temp;
    }
    printf("reversed array is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}