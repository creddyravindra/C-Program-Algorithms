/*C program for Sequential search*/

#include<stdio.h>
void Sequential(int arr[],int n ,int k){
	int i=0;
	for(i=0;i<n;i++){
		if (arr[i]==k)
			printf("element is found %d",arr[i]);
	}
	if(i>n)
		printf("element not found -1");
		
}
int main(){
	int n,a[20],i,k;
	printf("enter your element:");
	scanf("%d",&n);
	printf("enter your array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter searching element:");
	scanf("%d",&k); 
	Sequential(a,n,k);
	return 0;
}
