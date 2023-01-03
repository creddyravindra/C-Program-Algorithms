/* C Program for Selection sort*/
#include<stdio.h>
void swap(int *xp,int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void selectionsort(int a[],int n){
	int i,j,min_idx;
	for(i=0;i<=n-2;i++){
		min_idx=i;
		for(j=i+1;j<n-1;j++)
			if(a[j]<a[min_idx])
				min_idx=j;
		swap(&a[min_idx],&a[i]);
	}
}
void printarray(int a[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int a[10],i,n;
	printf("enter your array size number :");
	scanf("%d",&n);
	printf("enter your elements :");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	selectionsort(a,n);
	printf("sorted array : ");
	printarray(a,n);
	return 0;
}
