#include <stdio.h>
int display(int arr[], int size)
{
    // this is Trivarsal
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

int deletion(int arr[], int size, int index)
{
    // code for deletion

    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    printf("\n!! Yehh ! Deletion Successful !!\n\n");
    return --size;
}



int main()
{
    int index, size = 10;
    int arr[] = {21,23,55,7,43,98,80,21,23,67};
    printf("\nBefore Deletion\n");
    display(arr, size);
    printf("\nEnter the INDEX of the element you want to Delete \n");
    scanf("%d", &index);
    if (index > size - 1)
    {
        printf("\n\n!! Pls Enter Valid INDEX !!\n\n\n");
    }
    else
    {
        size = deletion(arr, size, index);
        printf("After Deletion\n");
        display(arr, size);
    }
    return 0;
}
