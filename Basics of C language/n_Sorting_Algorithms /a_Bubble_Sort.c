#include<stdio.h>

int bubble_sort(int arr[], int size)
{
    for (int i =0; i<size; i++)
    {
        for (int j =0; j<size-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    for (int i = 0 ; i<size; i++)
    {
        printf("%d",arr[i]);
    }
}

int main()
{
    int arr[] = {5,7,8,4,1,9,0,2,3,6};
    int size_arr = sizeof(arr)/sizeof(arr[0]);

    printf("The original array is: -\n");
    for (int i = 0; i<size_arr; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");

    printf("The sorted array: -\n");
    bubble_sort(arr,size_arr);

    return 0 ;
}
