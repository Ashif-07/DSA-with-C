#include <stdio.h>

int display(int arr[], int n)
{

    // this is Trivarsal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
int insertion(int arr[], int size, int index, int element, int capacity)
{
    // this is insertion
    if (index >= capacity + 1)
    {
        printf("\n !! Insertion is not possible !!\n\n");
        return size;
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
        printf("\n!! Yehh! Insertion is Sucessfull !!\n\n");
        return size += 1;
    }
}
void main()
{
    int arr[10] = {5, 3, 2, 6, 1, 7, 2};
    int capacity = 10, size = 7, index, element;
    printf("\nEnter the INDEX where you want to insert the element\n");
    scanf("%d", &index);
    printf("Enter the ELEMENT\n");
    scanf("%d", &element);
    printf("\nBefore insertion\n");
    display(arr, size);
    size = insertion(arr, size, index, element, capacity);
    printf("After insertion\n");
    display(arr, size);
}