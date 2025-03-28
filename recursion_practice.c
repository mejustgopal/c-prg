#include <stdio.h>
void print_n(int n);
void print_reverse_n(int n);
void print_odd_n(int n);
void print_odd_reverse_n(int n);
void print_even_n(int n);
void print_reverse_even_n(int n);
void print_square_n(int n);
void print_reverse_square_n(int n);
void dtob(int n);
void dtoO(int n);
void reverse(int n);
int main()
{
    int x;
    printf("Enter Value: ");
    scanf("%d", &x);
    reverse(x);
    return 0;
}
void reverse(int n)
{
    if (n > 0)
    {
        printf("%d", n % 10);
        reverse(n / 10);
    }
}
void dtoO(int n)
{
    if (n > 0)
    {
        dtoO(n / 8);
        printf("%d", n % 8);
    }
}
void dtob(int n)
{
    if (n > 0)
    {
        dtob(n / 2);
        printf("%d ", n % 2);
    }
}
void print_reverse_square_n(int n)
{
    if (n > 0)
    {
        printf("%d ", n * n);
        print_reverse_square_n(n - 1);
    }
}
void print_square_n(int n)
{
    if (n > 0)
    {
        print_square_n(n - 1);
        printf("%d ", n * n);
    }
}
void print_reverse_even_n(int n)
{
    if (n > 0)
    {
        printf("%d ", 2 * n);
        print_reverse_even_n(n - 1);
    }
}
void print_even_n(int n)
{
    if (n > 0)
    {
        print_even_n(n - 1);
        printf("%d ", 2 * n);
    }
}
void print_odd_reverse_n(int n)
{
    if (n > 0)
    {
        printf("%d ", 2 * n - 1);
        print_odd_reverse_n(n - 1);
    }
}
void print_odd_n(int n)
{
    if (n > 0)
    {
        print_odd_n(n - 1);
        printf("%d ", 2 * n - 1);
    }
}
void print_reverse_n(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        print_reverse_n(n - 1);
    }
}
void print_n(int n)
{
    if (n > 0)
    {
        print_n(n - 1);
        printf("%d ", n);
    }
}