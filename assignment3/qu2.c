#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, minIndex, temp;
    int *arr;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}