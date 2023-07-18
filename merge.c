#include<stdio.h>
#include<time.h>
#include<stdlib.h>


void merge_sort(int a[],int low,int high,int n)
{
     int mid;
    if(low<high)
    {
        mid = (low+high)/2;
        merge_sort(a,low,mid,n);
        merge_sort(a,mid+1,high,n);
        merge(a,low,mid,high,n);
    }

}

void merge(int a[],int low,int mid,int high,int n)
{
    int i,j,k,b[n];
    i = low;
    k = low;
    j = mid+1;

    while(i<=mid && j<=high)
    {
        if(a[i] < a[j])
        {
            b[k++] = a[i++];
        }
        else{
            b[k++] = a[j++];
        }
    }
    while(i<=mid)
    {
        b[k++] = a[i++];
    }
    while(j<=high)
    {
        b[k++] = a[j++];
    }

    for(int i=low; i<=high; i++)
    {
        a[i]=b[i];
    }

}

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
      int a[n], low, high;
    printf("Enter array elements: ");
    for(int i=0; i<n; i++){
          scanf("%d",&a[i]);
    }

    low =0;
    high = n-1;

    clock_t start,end;

    start = clock();
    merge_sort(a,low,high,n);
    end = clock();

    printf("\nSorted array elements: ");
    for(int i=0; i<n; i++)
    printf("%d\t",a[i]);

    //printf("\nTime take is %f ", (double)(end-start)/CLOCKS_PER_SEC );
}


