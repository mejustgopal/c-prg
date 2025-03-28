// #include<stdio.h>

// int main(){
//     int d,m,y;
//     printf("Enter Date(D/M/Y)");
//     scanf("%d/%d/%d",&d,&m,&y);
//     printf("Day-%d,Month-%d,Year-%d",d,m,y);
//     return 0;
// }


#include<stdio.h>

int main(){
    int h,m;
    printf("Enter Time(H:M)");
    scanf("%d:%d",&h,&m);
    printf("%d hour and %d minute",h,m);
    return 0;
}