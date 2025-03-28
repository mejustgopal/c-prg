#include <stdio.h>
int lcm(int x, int y);
int hcf(int x, int y);
int Prime(int n);
int NextPrime(int n);
void print_prime(int n);
void print_prime_between(int a, int b);
void fibonacci_n_terms(int n);

int main()
{
    // int a,b,c;
    // printf("Enter two no ");
    // scanf("%d %d",&a,&b);
    // c=hcf(a,b);
    // printf("H.C.F. is %d",c);
    // return 0;

    // int p,q;
    // printf("Enter two nos");
    // scanf("%d%d",&p,&q);
    // print_prime_between(p,q);

    // if(Prime(a))
    // printf("%d is prime",a);
    // else
    // printf("%d is not prime",a);

    int x;
    printf("Enter value: ");
    scanf("%d", &x);
    fibonacci_n_terms(x);
}

void print_prime_between(int a, int b)
{
    int x;
    for (x = a; x <= b; x++)
        if (Prime(x))
            printf("%d ", x);
}

void fibonacci_n_terms(int n)
{
    int a = -1, b = 1, c;
    while (n)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;

        n--;
    }
}
void print_prime(int n)
{
    int x = 2;
    while (n)
    {
        if (Prime(x))
        {
            printf("%d ", x);
            n--;
        }
        x++;
    }
}

int NextPrime(int n)
{
    while (!Prime(++n))
        ;
    return n;
}

int Prime(int n)
{
    int i;
    for (i = 2; i <= n - 1; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int hcf(int x, int y)
{
    int h;
    for (h = x < y ? x : y; h >= 1; h--)
        if (x % h == 0 && y % h == 0)
            return h;
}

int lcm(int x, int y)
{
    int L;
    for (L = x > y ? x : y; L <= x * y; L++)
        if (L % x == 0 && L % y == 0)
            return L;
}