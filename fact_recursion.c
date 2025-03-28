#include<stdio.h>
int fact(int);
int main(){
    int x;
    x=fact(5);
    printf("%d",x);
    return 0;
}
int fact(int n)
{
    int f;
    if(n==0)
        return 1;
    f=n*fact(n-1);
    return f;
}