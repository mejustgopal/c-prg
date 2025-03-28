//WAP TO CALCULATE SUM OF NUMBERS STORED IN ARRAY OF SIZE 10

// #include<stdio.h>

// int main(){
//     int i,a[10],sum;
//     puts("Enter 10 numbers");
//     for ( i = 0; i <=9; i++)
//         scanf("%d",&a[i]);
//     for(i=0;i<=9;i++)
//         sum=sum+a[i];
//     printf("Sum is %d",sum);
//     return 0;
// }

//WAP TO CALCULATE AVG OF NUMBERS STORED IN ARRAY OF SIZE 10

// #include<stdio.h>

// int main(){
//     int i,a[10],sum=0;
//     float avg;
//     puts("Enter 10 Numbers");
//     for(i=0;i<=9;i++)
//         scanf("%d",&a[i]);
//     for(i=0;i<=9;i++)
//         sum=sum+a[i];
//     avg = sum/10.0;
//     printf("Avg is %f",avg); 
//     return 0;
// }

//WAP TO CALCULATE SUM OF ALL EVEN NUMBERS AND ALL ODD NUMBERS STORED IN ARRAY OF SIZE 10

// #include<stdio.h>

// int main(){
//     int i,a[10],sum_even=0,sum_odd=0;
//     puts("Enter 10 numbers");
//     for(i=0;i<=9;i++)
//         scanf("%d",&a[i]);
//     for(i=0;i<=9;i++)
//         if(a[i]%2==0)
//             sum_even=sum_even+a[i];
//         else
//             sum_odd=sum_odd+a[i];
//     printf("Sum of even nos is %d",sum_even);
//     printf("\nSum of odd nos is %d",sum_odd);
//     return 0;
// }

//WAP TO find GREATEST NO STORED IN AN ARRAY OF SIZE 10

// #include<stdio.h>

// int main(){
//     int i,a[10],max;
//     puts("Enter 10 numbers");
//     for(i=0;i<=9;i++)
//         scanf("%d",&a[i]);
//     max = a[0];
//     for(i=1;i<=9;i++)
//         if(a[i]>max)
//             max=a[i];
//     printf("Grestest no is %d",max);   
//     return 0;
// }

//WAP TO FIND SMALLEST NO STORED IN AN ARRAY OF SIZE 10

// #include<stdio.h>

// int main(){
//     int i,a[10],min;
//     puts("Enter 10 numbers");
//     for(i=0;i<=9;i++)
//         scanf("%d",&a[i]);
//     min=a[0];
//     for(i=0;i<=9;i++)
//         if(a[i]<min)
//             min=a[i];
//     printf("Smallest no is %d ",min);
//     return 0;
// }

//WAP TO SORT ELEMENTS OF ARRAY OF SIZE 10

//  #include<stdio.h>
 
//  int main(){
//     int i,a[10],r,t;
//     puts("Enter 10 numbers");
//     for(i=0;i<=9;i++)
//         scanf("%d",&a[i]);
    
//     for(r=1;r<=9;r++)
//         for(i=0;i<=9-r;i++)
//         {
//             if (a[i]>a[i+1])
//             {
//                 t=a[i];
//                 a[i]=a[i+1];
//                 a[i+1]=t;
//             }   
//         }
//         printf("\n\n");
//         for(i=0;i<=9;i++)
//             printf("%d ",a[i]);
//     return 0;
//  }

//WAP TO FIND SECOND LARGEST IN ARRAY OF SIZE 10

// #include<stdio.h>

// int main(){
//     int i,a[10],max,second_max;
//     puts("Enter 10 numbers: ");
//     for(i=0;i<=9;i++)
//         scanf("%d",&a[i]);
//     if (a[0]>a[1])
//     {
//         max=a[0];
//         second_max=a[1];
//     }
//     else
//     {
//         max=a[1];
//         second_max=a[0];
//     }
//     for(i=2;i<=9;i++)
//     {
//         if(a[i]>max)
//         {
//             second_max=max;
//             max=a[i];
//         }
//         else
//         {
//             if(a[i]>second_max)
//                 second_max=a[i];
//         } 
//     }

//     printf("\n Second Largest Number is %d",second_max);
//     return 0;
// }

/* WAP TO FIND SECOND MINIMUM IN ARRAY OF SIZE 10

#include<stdio.h>

int main(){
    int i,a[10],min,second_min;
    puts("Enter 10 numbers: ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    if (a[0]<a[1])
    {
        min=a[0];
        second_min=a[1];
    }
    else
    {
        min=a[1];
        second_min=a[0];
    }
    for(i=2;i<=9;i++)
    {
        if(a[i]<min)
        {
            second_min=min;
            min=a[i];
        }
        else
        {
            if(a[i]<second_min)
                second_min=a[i];
        } 
    }

    printf("\n Second Smallest Number is %d",second_min);
    return 0;
}

*/

// WAP TO SORT ARRAY OF SIZE 10 IN DESCENDING ORDER

/* #include<stdio.h>
 
 int main(){
    int i,a[10],r,t;
    puts("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    
    for(r=1;r<=9;r++)
        for(i=0;i<=9-r;i++)
        {
            if (a[i]<a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }   
        }
        printf("\n\n");
        for(i=0;i<=9;i++)
            printf("%d ",a[i]);
    return 0;
 }
*/

//WAP IN C TO COPY THE ELEMENTS OF AN ARRAY IN ANOTHER ARRAY

#include<stdio.h>

int main(){
    int i,a[10],b[10];
    puts("Enter 10 numbers ");
    for ( i = 0; i <= 9; i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
        b[i]=a[i];
    for(i=0;i<=9;i++)
        printf("%d ",b[i]);
    
    return 0;
}