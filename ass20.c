// WAP TO CALCULATE SUM OF TWO MATRICES EACH OF ORDER 3X3
// #include <stdio.h>
// int main()
// {
//     int a[3][3], b[3][3], c[3][3], i, j;
//     printf("Enter the elements of first matrix: \n");
//     for (i = 0; i < 3; i++)
//         for (j = 0; j < 3; j++)
//             scanf("%d", &a[i][j]);
//     printf("Enter the elements of second matrix: \n");
//     for (i = 0; i < 3; i++)
//         for (j = 0; j < 3; j++)
//             scanf("%d", &b[i][j]);
//     printf("The sum of the two matrices is: \n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             c[i][j] = a[i][j] + b[i][j];
//             printf("%d ", c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// WAP TO CALCULATE PRODUCT OF TWO MATRICES EACH OF ORDER 3X3

// #include <stdio.h>
// int main()
// {
//     int a[3][3], b[3][3], c[3][3], i, j, k, sum;
//     printf("Enter the elements of first matrix : \n");
//     for (i = 0; i < 3; i++)
//         for (j = 0; j < 3; j++)
//             scanf("%d", &a[i][j]);
//     printf("Enter the elements of second matrix : \n");
//     for (i = 0; i < 3; i++)
//         for (j = 0; j < 3; j++)
//             scanf("%d", &b[i][j]);
//     for (i = 0; i < 3; i++)
//         for (j = 0; j < 3; j++)
//         {
//             for (k = 0, sum = 0; k < 3; k++)
//                 sum = sum + a[i][k] * b[j][k];
//             c[i][j] = sum;
//         }
//     for ( i = 0; i < 3; i++)
//     {
//             for( j = 0; j < 3; j++)
//                 printf("%d ",c[i][j]);
//             printf("\n");
//     }

// }

// WAP TO print transpose of a given matrix

#include <stdio.h>
int main()
{
    int A[3][3], i, j, k, temp;
    printf("Enter 9 elements of the matrix : \n");
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
            scanf("%d", &A[i][j]);
    for (i = 0, j = 1, k = 1; k <= 3; k++)
    {
        temp = A[i][j];
        A[i][j] = A[j][i];
        A[j][i] = temp;
        if(j-i==1)
            j++;
        else
            i++;         
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }        
    
}