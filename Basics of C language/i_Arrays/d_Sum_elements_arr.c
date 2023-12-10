#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of Array: -\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the Values in array: -\n");
    for (int i=0; i<n; i++)
    {
        printf("Enter %d element in array: ",(i+1));
        scanf("%d",&arr[i]);
    }

    int sum_elements = 0;
    for (int i=0; i<n; i++)
    {
        sum_elements += arr[i];
    }

    printf("The sum of elements in this Array are: %d", sum_elements);

    return 0;
}
