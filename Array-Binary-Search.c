#include <stdio.h>

int binarySearch(int arr[], int size, int element)
{
    int low = 0, mid, high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = ++mid;
        }
        else
        {
            high = --mid;
        }
    }
    return -1;
}

int main()
{
    // array must be sorted
    int arr[] = {1, 3, 5, 8, 15, 20, 25, 28, 35, 44};
    int size = sizeof(arr) / sizeof(int), element;
    printf("\nEnter the element you want to find : \t");
    scanf("%d", &element);
    int index = binarySearch(arr, size, element);
    (index != -1) ? printf("\nThe ELEMENT %d is Found at INDEX %d \n", element, index) : printf("\nElement %d is not found\n", element);
    
}
