#include<stdio.h>

void s1();
void s2();
void s3();
void s4();
void s5();
void s6();
void s7();
void s8();
void s9();
void s10();
int main()
{
    s10();
    return 0;
}
void s1()
{
    int i,j;
    for (i = 1; i <=4; i++)
    {
        for (j = 1; j <=7; j++)
        {
            if(j >= 5-i && j<= 3+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void s2()
{
    int i,j;
    for (i = 1; i <=4; i++)
    {
        for (j = 1; j <=7; j++)
        {
            if(j >= i && j<= 8-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void s3()
{
    int i,j,k;

    for (i = 1; i <=4; i++)
    {
        k=1;
        for (j = 1; j <=7; j++)
        {
            if(j >= 5-i && j<= 3+i)
            {
                if(k)
                    printf("*");
                else
                    printf(" ");
                k=1-k;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}

void s4()
{
    int i,j,k;
    for (i = 1; i <=4; i++)
    {
        k=1;
        for (j = 1; j <=7; j++)
        {
            if(j >= 5-i && j<= 3+i)
            {
                printf("%d",k);
                j<4?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}

void s5()
{
    int i,j;
    char k;
    for (i = 1; i <=4; i++)
    {
        k='A';
        for (j = 1; j <=7; j++)
        {
            if(j >= i && j<= 8-i)
            {
                printf("%c",k);
                k++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}

void s6()
{
    int i,j;
    char k;
    for (i = 1; i <=4; i++)
    {
        k='A';
        for (j = 1; j <=7; j++)
        {
            if(j >= i && j<= 8-i)
            {
                printf("%c",k);
                j<4?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}

void s7()
{
    int i,j,k,x;

    for (i = 1; i <=5; i++)
    {
        k=1;
        x=1;
        for (j = 1; j <=9; j++)
        {
            if(j >= 6-i && j<= 4+i)
            {
                if(k)
                {
                    printf("%d",x);
                    j<5?x++:x--;
                }
                else
                {
                    printf(" ");
                    if(j==5)
                        x--;
                }
                k=1-k;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}

void s8()
{
    int i,j;
    for (i = 1; i <=4; i++)
    {
        for (j = 1; j <=7; j++)
        {
            if(j <= 5-i || j>= 3+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void s9()
{
    int i,j,k;
    for (i = 1; i <=4; i++)
    {
        k=1;
        for (j = 1; j <=7; j++)
        {
            if(j <= 5-i || j>= 3+i)
            {
                printf("%d",k);
                j<4?k++:k--;
            }
            else
            {
                printf(" ");
                if(j==4)
                    k--;
            }
        }
        printf("\n");
    }
}

void s10()
{
    int i,j;
    char k;
    for (i = 1; i <=4; i++)
    {
        k='A';
        for (j = 1; j <=7; j++)
        {
            if(j <= 5-i || j>= 3+i)
            {
                printf("%c",k);
                j<4?k++:k--;
            }
            else
            {
                printf(" ");
                if(j==4)
                    k--;
            }
        }
        printf("\n");
    }
}