#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number for size of Dynamic Array: -\n");
    scanf("%d",&n);
    int *ptr = (int *)malloc(n*sizeof(int));

    for (int i = 0; i<n; i++)
    {
        printf("Enter %d element\n",i+1);
        scanf("%d",&ptr[i]);
    }

    printf("Displaying entered Elements of this array: -\n");
    for (int i = 0; i<n; i++)
    {
        printf("%d\n",ptr[i]);
    }
    free(ptr);
    return 0;
}
