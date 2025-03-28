// #include<stdio.h>

// int main(){
//     int a,b,h;
//     printf("Enter 2 nos");
//     scanf("%d%d",&a,&b);
//     for(h=a<b?a:b;h>=1;h--){
//         if (a%h==0 && b%h==0)
//         break;}
//     printf("H.C.F. is %d ",h);        
//     return 0;
// }

#include<stdio.h>

int main(){
    int a,b,h;
    printf("Enter 2 nos");
    scanf("%d%d",&a,&b);
    for(h=a<b?a:b;h>=1;h--)
    {
        if (a%h==0 && b%h==0)
        if(h==1)
        break;
    }
    printf("Co-prime No.");        
    return 0;
}