// #include<stdio.h>

// int main(){
//     a();
//     b();
//     a();

//     return 0;
// }
// a()
// {
//     printf("hello");
// }
// b()
// {
//     printf("bye");
//     a();
// }

//TNRN
/*#include<stdio.h> 
void sum();
int main(){
    sum();
    return 0;
}
void sum()
{
    int a,b,c;
    printf("Enter two nos");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum is %d",c);
}*/

//TSRN
/*
#include<stdio.h>

void sum(int,int);
int main(){
    int x=10,y=20;
    sum(x,y);
    return 0;
}
void sum(int a , int b)
{
    int c;
    c=a+b;
    printf("Sum is %d",c);
}
*/

//TNRS
/*
#include<stdio.h>

int sum();
int main(){
    int k;
    k=sum();
    printf("Sum is %d",k);
    return 0;
}
int sum()
{
    int a,b,c;
    printf("Enter two nos");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}*/

//TSRS
#include<stdio.h>

int sum(int,int);
int main(){
    int k ,x = 10,y=20;
    k=sum(x,y);
    printf("Sum is %d",k); 
    return 0;
}
int sum(int a, int b)
{
    int c;
    c=a+b;
    return c;
}