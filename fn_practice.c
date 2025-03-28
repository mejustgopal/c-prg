#include<stdio.h>
float AreaCircle(int );
float SimpleInterest(int p , float r ,int t);
int Even_Odd(int x);
void PrintN(int n);
void PrintOddN(int n);
int factorial(int n);
int perm(int n , int r);
int comb(int n,int r);
int CheckDigit(int num,int digit);
void Primefactors(int n);
void print_pascal(int n);
int main()
{
        // int x=3;
        // float y;
        // y=AreaCircle(x);
        // printf("Area is %f",y);

        // int a=100,c=2;
        // float b=3.5,si;
        // si = SimpleInterest(a,b,c);
        // printf("Simple Interest is %f",si);
        // return 0;

        // int a=3,check;
        // check =Even_Odd(a);
        // printf("%d",check);

        // int a,b;
        // printf("Enter values : ");
        // scanf("%d%d",&a,&b);
        // if(CheckDigit(a,b))
        //     printf("Yes, %d contains %d",a,b);
        // else
        //     printf("No, %d does not contain %d",a,b);

        int a;
        printf("Enter no ");
        scanf("%d",&a);
        print_pascal(a);
}

int SeriesSum(int n)
{
    int s=0;
    while(n)
    {
        s=s+factorial(n)/n;
        n--;
    }
    return s;
}

void print_pascal(int n)
{
        int i,j,k,r;

    for (i = 1; i <=n; i++)
    {
        k=1;
        r=0;
        for (j = 1; j <=2*n-1; j++)
        {
            if(j >= n+1-i && j<= n-1+i)
            {
                if(k)
                    printf("%3d",comb(i-1,r++));
                else
                    printf("  ");
                k=1-k;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}

void Primefactors(int n)
{
    int i=2;
    while(n>1)
    {
        while (n%i==0)
        {
            printf("%d ",i);
            n/=i;
        }
        i++;
    }
}

int CheckDigit(int num,int digit)
{
    while (num)
    {
        if (num%10==digit)
            return 1;
        num/=10;
    }
    return 0;
}

int comb(int n,int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int perm(int n , int r)
{
    return factorial(n)/factorial(n-r);
}
int factorial(int n)
{
    int f=1;
    while(n)
    {
        f=f*n;
        n--;
    }
    return f;
}

void PrintOddN(int n)
{
    int i;
    for (i = 1 ; i <=n; i++)
    {
        printf("%d ",2*i-1);
    }
}

void PrintN(int n)
{
    int i;
    for (i = 1 ; i <=n; i++)
    {
        printf("%d ",i);
    }
    
}

int Even_Odd(int x)
{
    return x%2?0:1;
}

float SimpleInterest(int p , float r ,int t)
{
    float SI;
    SI=(p*r*t)/100;
    return SI;
}

float AreaCircle(int r)
{
    float area;
    area = 3.14*r*r;
    return area;
}
