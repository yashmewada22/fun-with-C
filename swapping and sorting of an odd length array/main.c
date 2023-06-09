#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int i,n,a[100],t,j;

    printf("Enter length \n");

    scanf("%d",&n);

    printf("Enter elements \n");

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Input array \n");

    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    printf("\n");

    for(i=0;i<n/2;i++){
        swap(&a[i],&a[(n/2)+1+i]);
    }

    printf("Output after swapping \n");

    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
     printf("\n");

    for(i=0;i<n/2;i++)
    {
        for(j=0;j<n/2-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;

            }
        }
    }
    for(i=0;i<n/2;i++)
    {
        for(j=n/2+1;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }

    printf("Output after sorting \n");

    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}