#include <stdio.h>
void f1(int y[][4], int row);
int main()
{
    int x[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    f1(x, 3);
    return 0;
}
void f1(int y[][4], int row)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%2d ", y[i][j]);
        printf("\n");
    }
}