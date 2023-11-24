#include<stdio.h>

int input (int *p_arr, int ord)
{
    for (int i = 0; i<(ord*ord); i++)
    {
        printf("Enter %d element: ",(i+1));
        scanf("%d",p_arr);
        p_arr++;
    }
    return 0;
}

int display (int *p_arr, int ord)
{
    for (int i = 0; i<ord; i++)
    {
        for (int j = 0; j<ord; j++)
        {
            printf("%d  ",*p_arr);
            p_arr++;
        }
        printf("\n");
    }
    return 0;
}

int sum_display (int *par1, int *par2, int *par3, int ord)
{
    for ( int i = 0; i<ord; i++)
    {
       for (int j =0; j<ord; j++)
        {
            *par3 = *par1 + *par2 ;
            printf("%d  ",*par3);
            par1++;
            par2++;
            par3++;
        }
       printf("\n");
    }  
    return 0;
}

int diff_display (int *par1, int *par2, int *par3, int ord)
{
    for ( int i = 0; i<ord; i++)
    {
       for (int j =0; j<ord; j++)
        {
            *par3 = *par1 - *par2 ;
            printf("%d  ",*par3);
            par1++;
            par2++;
            par3++;
        }
        printf("\n");
    }  
    return 0;
}


int multi_display (int ord, int arr1[ord][ord], int arr2[ord][ord], int arr3[ord][ord]) 
{
    for (int i = 0; i < ord; i++) 
    {
        for (int j = 0; j < ord; j++) 
        {
            for (int k = 0; k < ord; k++) 
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    
    for (int i =0; i<ord; i++)
    {
        for (int j =0; j<ord; j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}


int transpose (int ord, int arr1[ord][ord], int arr2[ord][ord])
{
    for (int i = 0;i<ord;i++)
    {
        for (int j=0; j<ord; j++)
        {
            arr2[j][i]=arr1[i][j];
        }
    }
     
    for (int i = 0;i<ord;i++)
    {
        for (int j=0; j<ord; j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }   
    return 0;
}

int det( int ord, int arr[ord][ord])
{
    
    return 0;
}


int main()
{
    int order;
    int confirm;

    printf("Enter the order of matrix 1 and matrix 2: -\n");
    scanf("%d", &order);
    
    int arr1[order][order], arr2[order][order], arr3[order][order], choice;

    for (int i =0;i<order;i++)
    {
        for (int j =0; j<order; j++)
        {
            arr1[i][j]=0;
            arr2[i][j]=0;
            arr3[i][j]=0;            
        }
    }

    printf("Enter the elements in matrix 1: -\n");
    input(*arr1,order);
    
    printf("Enter the elements in matrix 2: -\n");   
    input(*arr2,order);
    
    printf("Enter the desired option to execute the program: -\n");
    printf("Enter 1: To display of elements of matrix 1 and 2\n");
    printf("Enter 2: To display of elements of matrix 1 and 2 and their addition\n");
    printf("Enter 3: To display of elements of matrix 1 and 2 and their subtraction\n");
    printf("Enter 4: To display of elements of matrix 1 and 2 and their multiplication\n");
    printf("Enter 5: To display of elements of matrix 1 and 2 and their determinants\n");
    printf("Enter 6: To display of elements of matrix 1 and 2 and their transposed matrices\n");
    printf("Enter 7: To display of elements of matrix 1 and 2 and their adjoint matrices\n");
    printf("Enter 8: To display of elements of matrix 1 and 2 and their inverse matrices\n");
    printf("Enter 9: To terminate the program\n");
    scanf("%d",&choice); 
      
    switch (choice)
    {
        case 1:
            printf("Displaying matrix 1 elements: -\n");
            display(*arr1,order);
            printf("Displaying matrix 2 elements: -\n");
            display(*arr2,order);

            break;

        case 2:
            printf("Displaying matrix 1 elements: -\n");
            display(*arr1,order);
            printf("Displaying matrix 2 elements: -\n");
            display(*arr2,order);

            printf("On Adding two matrices we get: -\n");
            sum_display(*arr1,*arr2,*arr3,order);

            break;

        case 3:
            printf("Displaying matrix 1 elements: -\n");
            display(*arr1,order);
            printf("Displaying matrix 2 elements: -\n");
            display(*arr2,order);

            printf("On Subtracting two matrices we get: -\n");
            diff_display(*arr1,*arr2,*arr3,order);

            break;

        case 4:
            printf("Displaying matrix 1 elements: -\n");
            display(*arr1,order);
            printf("Displaying matrix 2 elements: -\n");
            display(*arr2,order);

            printf("On Multiplication two matrices we get: -\n");
            multi_display(order,arr1,arr2,arr3);

            break;

        case 5:
            printf("Displaying matrix 1 elements: -\n");
            display(*arr1,order);
            printf("Displaying matrix 2 elements: -\n");
            display(*arr2,order);

            printf("On finding Determinants of two square matrices we get: -\n");
            printf("Determinant of matrix 1 is: -\n");
            //det();
            printf("Determinant of matrix 2 is: -\n");
            //det();
            break;
        
        case 6:
            printf("Displaying matrix 1 elements: -\n");
            display(*arr1,order);
            printf("Displaying matrix 2 elements: -\n");
            display(*arr2,order);

            printf("On Transposing two matrices we get: -\n");
            printf("Transposed matrix 1 is: -\n");
            transpose(order,arr1,arr3);

            printf("Transposed matrix 2 is: -\n");
            transpose(order,arr2,arr3);

            break;
            
        case 7:
            printf("Displaying matrix 1 elements: -\n");
            display(*arr1,order);
            printf("Displaying matrix 2 elements: -\n");
            display(*arr2,order);
            break;

        case 8:
            
            

            printf("Are you sure to terminate the program: -\n");
            printf("Enter 1 for: Yes, Terminate\n");
            printf("Enter 0 for: No, Go Back\n");
            scanf("Enter here: %d",&confirm);
            
            if (confirm == 1)
            {
                printf("Terminating the Program \n");
                break;  
            }
            else if (confirm == 0)
            {
                printf("Going Back in Program \n");
            }
            else 
            {
                printf("Enter valid choice!!! \n"); 
            }
            break;
    
        default:
            printf("Enter valid choice!!! \n");                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  

            break;
    }
    return 0;
}
