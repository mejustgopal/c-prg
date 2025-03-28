#include<stdio.h>

int main(){
    int l,b,h,vol;
    printf("Enter length:-\n");
    scanf("%d",&l);
    printf("Enter breadth:-\n");
    scanf("%d",&b);
    printf("Enter height:-\n");
    scanf("%d",&h);
    vol=l*b*h;
    printf("Volume of the cuboid is %d",vol);
    return 0;
}
