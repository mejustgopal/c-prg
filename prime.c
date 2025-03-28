// #include<stdio.h>

// int main(){
//     int l=2,u=100,x,i;
//     for (x=l;x<=u; x++)
//     {
//         for ( i = 2; i <=x; i++)
//         {
//             if (x%i==0)
//                 break;
//         }
//         if(i==x)
//         printf("%d ",x);        
//     }
    
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int l,u,x,i;
//     printf("Enter lower limit:-\n");
//     scanf("%d",&l);
//     printf("Enter upper Limit:- \n");
//     scanf("%d",&u);
//     for (x=l;x<=u; x++)
//     {
//         for ( i = 2; i <=x; i++)
//         {
//             if (x%i==0)
//                 break;
//         }
//         if(i==x)
//         printf("%d ",x);        
//     }
    
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int n,i,x;
//     printf("Enter a no\n");
//     scanf("%d",&n);
//     for ( x = n+1; ; x++)
//     {
//         for ( i = 2; i<x; i++)
//         {
//             if (x%i==0)
//             {
//                 break;
//             }
//         }
//         if(i==x)
//         printf("Next prime no is %d",x);
//         break;
        
        
//     }
    
//     return 0;
// }

#include<stdio.h>

int main(){
    int i,x;
    printf("Enter a no : \n");
    scanf("%d",&x);

    for(i=2;i<x;i++)
    {
        if(x%i==0)
            break;
    }
    if(i==x)
        printf("%d is a prime no",x);
    else
        printf("%d is not  a prime no",x);
    return 0;
}