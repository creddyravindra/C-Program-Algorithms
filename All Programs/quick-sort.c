/*C Program for application of Quick sort*/

#include<stdio.h>
void Exch(int *p,int *l){
	int temp = *p;
	*p = *l;
	*l = temp;
}
void Quicksort(int a[200],int low,int high){
	int key,i,j;
	if (low > high)
		return;
	key = low;
	i=low;
	j = high;
	while(i<j){
		while(a[i]<=a[key])
			i=i+1;
		while(a[j]>a[key])
			j=j-1;
		if (i<j)
			Exch(&a[i],&a[j]);
	}
	Exch(&a[j],&a[key]);
	Quicksort(a,low,j-1);
	Quicksort(a,j+1,high);
}
int main()
{
	int n,a[100],k;
	printf("enter how many numbers :");
	scanf("%d",&n);
	printf("enter the array numbers :");
	for(k=0;k<n;k++){
		scanf("%d",&a[k]);
	}
	printf("array elements are :");
	for(k=0;k<n;k++){
		printf("%d\t",a[k]);
	}
	printf("\n");
	Quicksort(a,0,n);
	printf("sorted array elements are :");
	for(k=0;k<n;k++){
		printf("%d\t",a[k]);
	}
	return 0;
}
