//WRITE A FUNCTION TO FIND GREATEST NO FROM THE GIVEN ARRAY OF ANY SIZE(TSRS)

/*
#include<stdio.h>

int greatest(int arr[],int size)
{
    int i,max;
    max = arr[0];
    for(i=1;i<size;i++)
        if(arr[i]>max)
            max=arr[i];
    return max;
}

int main()
{
    int i,size;
    puts("Enter size of the array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter %d elements",size);
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    int max = greatest(arr,size);
    printf("\n The greatest no in the array is %d",max);
    
    return 0;
}

*/

//WRITE A FUNCTION TO FIND smallest NO FROM THE GIVEN ARRAY OF ANY SIZE(TSRS)

/*
#include<stdio.h>

int smallest(int arr[], int size)
{
    int i,min;
    min = arr[0];
    for(i=0;i<size;i++)
        if(arr[i]<min)
            min=arr[i];
    return min;
}

int main()
{
    int i,size;

    puts("Enter size of the array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter %d elements: ",size);
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    int min = smallest(arr,size);
    printf("Smalllest element  = %d",min);
    return 0;
}
*/

//WRITE A FUNCTION TO SORT AN ARRAY  OF ANY SIZE(TSRN)

/*
#include<stdio.h>

void sort(int arr[], int size)
{
    int i,r,t;
    for(r=1;r<size;r++)
        for(i=0;i<size-r;i++)
        {
            if(arr[i]>arr[i+1])
            {
                t=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=t;
            }
        }
        // for(i=0;i<size;i++)
        //     printf("%d ",arr[i]);
}

int main()
{
    int i,size;

    puts("Enter array size");
    scanf("%d",&size);

    int arr[size];
    
    printf("Enter %d elements",size);
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    
    sort(arr,size);

    return 0;
}

*/

//WRITE A FUNCTION TO ROTATE AN ARRAY BY N POSITION IN D(LEFT/RIGHT) DIRECTION.
/*
#include<stdio.h>

void rotate(int A[], int size , int n , int d)
{
    int i,temp;
    if(d==1)
    {
        while(n)
        {
            temp=A[size-1];
            for(i=size-2;i>=0;i--)
                A[i+1]=A[i];
            A[0]=temp;
            n--;
        }
    }
    else
    {
        while(n)
        {
            temp=A[0];
            for(i=1;i<=size-1;i++)
                A[i-1]=A[i];
            A[size-1]=temp;
            n--;
        }   
    }
    
}

int main()
{
    int i,size,n,d;
    puts("Enter array size ");
    scanf("%d",&size);

    int A[size];

    printf("Enter %d elements : ",size);
    for(i=0;i<size;i++)
        scanf("%d",&A[i]);
    
    printf("\n Enter position no : ");
    scanf("%d",&n);

    printf("\n Enter direction(1/-1):");
    scanf("%d",&d);

    rotate(A,size,n,d);

    for(i=0;i<size;i++)
        printf("%d ",A[i]);
    
    return 0;
}
*/

//WRITE A FUNCTION TO FIND THE FIRST OCCURENCE OF ADJACENT DUPLICATE VALUES IN THE ARRAY.FUNCTION HAS TO RETURN THE VALUE OF THE ELEMENT
/*
#include<stdio.h>

int adj_dupicate(int A[], int size)
{
    int i;
    for(i=0;i<=size-2;i++)
    {
        if(A[i]==A[i+1])
            return A[i];
    }
    return -1;   
}

int main()
{
    int i,size;
    puts("Enter Array Size:");
    scanf("%d",&size);

    int A[size];

    printf("Enter %d elements:",size);
    for(i=0;i<size;i++)
        scanf("%d",&A[i]);
    
    int result = adj_dupicate(A,size);

    if (result!=-1)
        printf("First Adjacent duplicate: %d",result);
    else
        printf("No adjacet duplicate found");
    return 0;
}
*/

//WRITE A FUNCTION TO SWAP TWO ELEMENTS OF GIVEN ARRAYS WITH SPECIFIED INDICES.
/*
#include<stdio.h>
void swap(int a[],int i1,int i2)
{
    int t;

    t=a[i1];
    a[i1]=a[i2];
    a[i2]=t;
}

int main()
{
    int i,size,i1,i2;
    
    puts("Enter Array Size :");
    scanf("%d",&size);

    int a[size];

    printf("Enter %d elements: \n",size);
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    
    printf("Enter first index which you want to swap: ");
    scanf("%d",&i1);

    printf("Enter secind index you want to swap with: ");
    scanf("%d",&i2);

    swap(a,i1,i2);
    
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
    return 0;
}
*/

//WRITE A FUNCTION TO COUNT  TOTAL NO OF DUPLICATE ELEMENTS IN ARRAY

// int count_duplicate(int A[],int size)
// {
//     int i,j,count=0;
//     sort(A,size);
//     i=0;
//     j=1;

//     while (i<=size-2)
//     {
//         if(A[i]==A[j])
//             count++;
//         while(A[i]==A[j])
//             j++;
//         i=j;
//         j=j+1;
//     }
//     return count;
// }

// int main()
// {
//     int i,size;

//     puts("Enter Array Size: ");
//     scanf("%d",&size);

//     int a[size];
//     printf("Enter %d elements: ",size);
//     for(i=0;i<size;i++)
//         scanf("%d",&a[i]);
    
//     sort(a,size);

//     int count =count_duplicate(a,size);

//     printf("Total no of duplicate items are %d",count);
//     return 0;
// }

//WRITE A FUNCTION TO PRINT ALL UNIQUE ELEMENTS IN AN ARRAY

// #include<stdio.h>

// void printUniqueElements(int A[],int size)
// {
//     int i;
//     for (i = 0; i <size; i++)
//     {
//         int isUnique = 1;
//         for (int j = 0; j < size; j++)
//         {
//             if(i!=j && A[i]==A[j])
//                 {
//                     isUnique = 0;
//                     break;
//                 }
//         }
        
//         if(isUnique)
//             printf("%d ",A[i]);
//     }
    
// }

// int main()
// {
//     int i,size;

//     puts("Enter Array Size");
//     scanf("%d",&size);

//     int A[size];

//     printf("Enter %d elements: ",size);
//     for(i=0;i<size;i++)
//         scanf("%d",&A[i]);
    
//     printUniqueElements(A,size);

//     return 0;
// }


// FUNCTION TO SORT AN ARRAY IN DESCENDING ORDER

#include<stdio.h>
void sort_descending(int a[],int size)
{
    int i,r,t;
    for(r=1;r<size;r++)
        for(i=0;i<size-r;i++)
            if(a[i]<a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
}
int main()
{
    int size;
    puts("Enter array size: ");
    scanf("%d",&size);

    int a[size];

    printf("Enter %d elements: ",size);
    for(int i = 0 ; i<size;i++)
        scanf("%d",&a[i]);
    
    sort_descending(a,size);
    puts("Sorted array in descending order: ");
    for(int i=0;i<size;i++)
        printf("%d ",a[i]);
    return 0;
}

//Write a function to merge two arrays of same size sorted in descending order

// #include<stdio.h>

// void merge_arrays(int a[],int b[],int size)
// {
//     int i,j,k;
//     int merged[2*size];
    
//     i=j=k=0;
//     while(i<size && j<size){
//             if(a[i]>b[j])
//                 merged[k++]=a[i++];
//             else
//                 merged[k++]=b[j++];
//     }
//     while(i<size)
//     {
//         merged[k++]=a[i++];
//     }
//     while(j<size)
//     {
//         merged[k++]=b[j++];
//     }
//     puts("Merged array is: ");
//     for(i=0;i<2*size;i++)
//         printf("%3d ",merged[i]);
// }

// int main()
// {
//     int i,size;
//     puts("Enter array size: ");
//     scanf("%d",&size);

//     int a[size];
//     int b[size];

//     printf("Enter %d elements of 1st Array: ",size);
//     for(i = 0 ; i<size;i++)
//         scanf("%d",&a[i]);

//     printf("Enter %d elements of 2nd Array: ",size);
//     for(i = 0 ; i<size;i++)
//         scanf("%d",&b[i]);

//     merge_arrays(a,b,size);
//     return 0;
// }
