/*C program for Binary search*/

#include<stdio.h>
void result(int flag,int mid,int k)
{
	if(flag == 1)
		printf("%d is found at index %d",k,mid+1);
	else
		printf("%d is not found" , k);
}
void binarysearch(int a[100],int low,int high,int k)
{
	int mid,flag=0;
	while(low<=high)
	{
		mid = (low+high)/2;
		if(a[mid] == k)
		{
			flag = 1;
			break;
		}
		else if(a[mid]>=k)
			high = mid-1;
		else
			low = mid+1;
	}
	result(flag,mid,k);
}
int main()
{
	int i,n,a[30],k;
	printf("enter the size of array :");
	scanf("%d",&n);
	printf("\nenter the %d elements",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the searching element :");
	scanf("%d",&k);
	binarysearch(a,0,n,k);
}
