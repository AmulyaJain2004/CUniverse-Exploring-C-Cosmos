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

    int cpyarr[n];
    for(int i=0; i<n; i++)
    {
        cpyarr[i]=arr[i];
    }

    printf("\nPrinting the original array: -\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nPrinting the copied array: -\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ",cpyarr[i]);
    }

    return 0;
}
