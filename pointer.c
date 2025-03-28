#include <stdio.h>
void swap(int *p, int *q);
void display(int *p, int size);
void input(int *p, int size);
int length(char *p);
int main()
{
    // int x=5,*p,**q,***r;
    // p=&x;
    // q=&p;
    // r=&q;
    // printf("%d %d %d %d",q,*r,&p,&x);
    // printf("\n%d %d %d %d",**r,&q,**&q,p);
    // printf("%d %d %d %d",&r,**q,*p,***r);
    // int *j;
    // j=&x;
    // printf("%d %d %d",&x,j,*&x);
    // printf("\n%d %d %d",&j,x,*j);

    // int a,b;
    // printf("Enter two nos");
    // scanf("%d%d",&a,&b);
    // swap(&a,&b);
    // printf("Swapped values are %d %d ",a,b);

    // int a[10];
    // input(a, 10);
    // display(a, 10);

    int l;
    char str[10];
    printf("Enter a string (9 characters max)");
    fgets(str,10,stdin);
    l=length(str);
    printf("Length of the string is %d",l);
    return 0;
}
int length(char *p)
{
    int i;
    for(i=0;*(p+i);i++);
    return i;
}
void swap(int *p, int *q)
{
    int c;
    c = *p;
    *p = *q;
    *q = c;
}
void display(int *p, int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d", *(p + i));
}
void input(int *p, int size)
{
    int i;
    printf("Enter %d numbers", size);
    for (i = 0; i < size; i++)
        scanf("%d", p + i);
}