#include <stdio.h>
#include <string.h>
struct Book
{
    int Bookid;
    char title[20];
    float price;
};

struct Book input()
{
    struct Book b;
    printf("Enter Bookid, title and Price ");
    scanf("%d", &b.Bookid);
    fflush(stdin);
    fgets(b.title, 20, stdin);
    b.title[strlen(b.title) - 1] = '\0';
    scanf("%f", &b.price);
    return b;
}

void display(struct Book b)
{
    printf("\n %d  %s  %f", b.Bookid, b.title, b.price);
}

int main()
{
    struct Book b1 = {1, "C in Depth", 350.0};
    struct Book b2;
    struct Book b3;
    b2.Bookid = 2,
    strcpy(b2.title, "Cpp");
    b2.price = 500.0;
    b3 = input();
    display(b1);
    display(b2);
    display(b3);
    // printf("Enter Bookid, title and Price ");
    // scanf("%d",&b3.Bookid);
    // fgets(b3.title,20,stdin);
    // scanf("%f",&b3.price);
    return 0;
}