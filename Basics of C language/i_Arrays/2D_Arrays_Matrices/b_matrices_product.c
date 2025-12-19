#include <stdio.h>
int main()
{
    int row1,row2,col1,col2;

    printf("Enter the rows and coloumns of first matrix: ");
    scanf("%d %d",&row1, &col1);

    printf("Enter the rows and coloumns of second matrix: ");
    scanf("%d %d",&row2, &col2);

    if (col1 != row2)
    {
        printf("Matrix multiplication is not possible.");
        return 0;
    }

    int arr1[row1][col1], arr2[row2][col2], arr3[row1][col2];

    printf("Enter the elements of matrix 1: -\n");
    for (int i =0; i< row1; i++)
    {
        for (int j =0; j<col1; j++)
        {
            printf("Enter [%d %d]th element: ", i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter the elements of matrix 2: -\n");
    for (int i =0; i< row2; i++)
    {
        for (int j =0; j<col2; j++)
        {
            printf("Enter [%d %d]th element: ", i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }

    for(int i = 0; i< row1; i++)
    {
        for (int j=0; j<col2; j++)
        {
            arr3[i][j] = 0;
        }
    }

    printf("Multiplication of 2 matrices will be: -\n");
    for(int i = 0; i< row1; i++)
    {
        for (int j=0; j<col2; j++)
        {
            for (int k=0; k<col1; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    printf("Displaying elements of Matrix1: -\n");
    for(int i = 0; i< row1; i++)
    {
        for (int j=0; j<col1; j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("Displaying elements of Matrix2: -\n");
    for(int i = 0; i< row2; i++)
    {
        for (int j=0; j<col2; j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

    printf("Displaying elements of Matrix3: -\n");
    for(int i = 0; i< row1; i++)
    {
        for (int j=0; j<col2; j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
