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

    printf("Printing the Elements of Array in Reverse order: -\n");
    for (int i=0; i<n; i++)
    {
        printf("%d element in array: %d\n",(n-i),arr[n-i-1]);
    }
    // or
    /*
        for (int i =n-1; i>=0;i--)
        {
            printf("%d element in array: %d\n",(i),arr[i]);
        }
    */
    return 0;
}
