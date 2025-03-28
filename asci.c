// #include<stdio.h>

// int main(){
//     char ch;
//     printf("Enter character");
//     scanf("%c",&ch);
//     printf("%d ",ch);
//     return 0;
// }
// #include<stdio.h>

// int main(){
//     int a;
//     printf("Enter integer value");
//     scanf("%d",&a);
//     printf("%c",a);
//     return 0;
// }
#include<stdio.h>

int main(){
    char a,b,c;
    printf("\nEnter characters");
    scanf("%c %c %c",&a,&b,&c);
    printf("Ascii of %c is %d\n",a,a);
    printf("Ascii of %c is %d\n",b,b);
    printf("Ascii of %c is %d\n",c,c);
    printf("\n");
    return 0;
}