/* C Program to implement Floyd's Algorithm */

#include<stdio.h>
int floyd(int a[10][10],int);
int min(int,int);
int main()
{
	int n,a[10][10],i,j;
	printf("enter the no of nodes/vertices");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	floyd(a,n);
}
int floyd(int a[10][10],int n)
{
	int i,j,k,d[10][10];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			d[i][j] = a[i][j];
		}
	}
	for(k=1;k<=n;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
			}
		}
	}
	printf("\n The distance matrix is :");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
				printf("%d\t",d[i][j]);
		}
		printf("\n");
	}
}
int min(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}
