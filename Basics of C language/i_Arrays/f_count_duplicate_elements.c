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

    int count =0;
    for (int i = 0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (arr[i]==arr[j])
            {
                count ++;
                break;
            }
        }
    }
    return 0;
}
