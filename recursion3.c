// WAP TO PRINT FIRST n NATURAL NUMBERS
void printN(int);
#include<stdio.h>

int main(){
    printN(10);
    return 0;
}
void printN(int n)
{
    if (n>1)
        printN(n-1);
        printf(" %d",n);
}