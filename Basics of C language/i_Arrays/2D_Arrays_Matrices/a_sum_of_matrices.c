#include <stdio.h>
int main()
{
    int m;

    printf("Enter the order of matrix 1 & 2: - \n");
    scanf("%d", &m);

    int array1[m][m], array2[m][m], array3[m][m];

    printf("Enter the numbers in matrix 1: - \n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &array1[i][j]);
        }
    }

    printf("Enter the numbers in matrix 2: - \n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &array2[i][j]);
        }
    }
    
    for (int i  = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            array3[i][j] = array1[i][j] + array2[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", array3[i][j]);
        }
    }
    
    return 0;
}
