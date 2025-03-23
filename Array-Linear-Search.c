#include <stdio.h>

int search(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            printf("\nThe Element \" %d \" is Found at INDEX \" %d \"\n\n", element, i);
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[] = {12, 53, 232, 64, 23, 77, 23, 65}, size = sizeof(arr) / sizeof(int), element, result;
    printf("Enter the ELEMENT you want to search :  ");
    scanf("%d", &element);
    result = search(arr, size, element);
    if (result == 0)
        printf("\nThe Element \" %d \" is Not Found \n\n", element);
}
