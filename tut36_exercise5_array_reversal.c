#include <stdio.h>
#include <string.h>
int print_array_rev(int arr2[], int n)
{
    printf("reversed string:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr2[i]);
    }
}

int array_Rev(int *arr, int n)
{
    int temp = 0, str[100]; 
    printf("Value of n is %d\n", n);
    int j;
    j = (n/2) - 1;
    int k = n-1;
    printf("%d\n", j);

    for (int i = 0; i <= j; i++)
    {
        temp = arr[i];
        arr[i] = arr[k - i];
        arr[k - i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n; //arr2[100];
    // int c;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    // printf("Enter the number of elements you want inside the array:\n");
    // scanf("%d", &n);
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("The length of the array is: %d\n", len);
    // printf("Enter the elements:\n");
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr2[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr2[i]);
    // }
    // printf("\n");
    // printf("%d", n);
    // print_array_rev(arr2, n);
    // print_array_rev(arr, len);
    array_Rev(arr, len);
    return 0;
}