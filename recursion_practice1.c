#include <stdio.h>
int SumN(int n);
int SumOddN(int n);
int SumEvenN(int n);
int SumSqN(int n);
int sumdigitsN(int n);
int fact(int n);
int hcf(int a, int b);
int fib(int n);
void PrintFibN(int n);
int CountDigits(int n);
float power(float a, float b);
int main()
{
    float x, y;
    printf("Enter value :");
    scanf("%f%f", &x, &y);
    printf("%f", power(x, y));
    return 0;
}

float power(float a, float b)
{
    if (b == 0)
        return 1;
    else if (b > 0)
        return a * power(a, b - 1);
    else
        return power(a, b + 1) / a;
}

int CountDigits(int n)
{
    if (n == 0)
        return 0;
    return CountDigits(n / 10) + 1;
}

int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

void PrintFibN(int n)
{
    if (n == 0)
        printf("%d ", n);
    else
    {
        PrintFibN(n - 1);
        printf("%d ", fib(n));
    }
}

int hcf(int a, int b)
{
    if (a > b)
    {
        if (a % b == 0)
            return b;
        else
            return hcf(a % b, b);
    }
    else
    {
        if (b % a == 0)
            return a;
        else
            return hcf(a, b % a);
    }
}

int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

int sumdigitsN(int n)
{
    if (n == 0)
        return 0;
    return n % 10 + sumdigitsN(n / 10);
}

int SumSqN(int n)
{
    if (n == 1)
        return 1;
    return n * n + SumSqN(n - 1);
}

int SumEvenN(int n)
{
    if (n == 1)
        return 2;
    return 2 * n + SumEvenN(n - 1);
}

int SumOddN(int n)
{
    if (n == 1)
        return 1;
    return 2 * n - 1 + SumOddN(n - 1);
}

int SumN(int n)
{
    if (n == 1)
        return 1;
    return n + SumN(n - 1);
}