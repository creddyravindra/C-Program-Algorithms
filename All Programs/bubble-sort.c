/*C Program for Bubble sort*/

#include<stdio.h>
void swap(int *xp,int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void bubblesort(int a[],int n){
	int i,j;
	for(i=0;i<=n-2;i++){
		for(j=0;j<=n-2-i;j++)
			if(a[j+1]<a[j])
				swap(&a[j],&a[j+1]);
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
	bubblesort(a,n);
	printf("sorted array : ");
	printarray(a,n);
	return 0;
}
