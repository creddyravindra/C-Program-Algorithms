/*C program for Merge sort*/

#include<stdio.h>
int b[5000];
void merge(int a[],int low,int mid,int high)
{
    int i,j,k;
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high)
    {
        if(a[i]<=a[j])
            b[k++]=a[i++];
        else
            b[k++]=a[j++];
    }
    while(i<=mid)
    	b[k++]=a[i++];
    while(j<=high)
      	b[k++]=a[j++];
    for(k=low;k<=high;k++)
      	a[k]=b[k];
}
void mergesort(int a[],int low,int high)
{
    int mid;
    if(low>=high)
     	return;
    mid = (low+high)/2;
    mergesort(a,low,mid);
    mergesort(a,mid+1,high);
    merge(a,low,mid,high);
}
int main()
{
    int n,a[5000],k;
    double ts;
    printf("\n enter how many numbers:");
    scanf("%d",&n);
    printf("the random numbers are :\n");
    for(k=1;k<=n;k++)
        scanf("%d",&a[k]);
    printf("%d\t",a[k]);
    mergesort(a,1,n);
    printf("\n Sorted Numbers  are:\n");
    for(k=1;k<=n;k++)
    	printf("%d\t",a[k]);
    return 0;
}
