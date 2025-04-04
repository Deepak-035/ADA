#include<stdio.h>
#include<time.h>
void main()
{
	int n;
	int i,min,j,temp;
	srand(time(NULL));
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		a[i]=rand()%25000;
	}
	//printf("The array is \n");
	//for(i=0;i<n;i++)
	//{
		//printf("%d ",a[i]);
	//}
	printf("\n");
	clock_t start=clock();
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
	clock_t end=clock();
	double timetaken= ((double)(end-start))/CLOCKS_PER_SEC;
	printf("The time taken is %f\n",timetaken);
	//printf("The sorted element is\n");
	//for(i=0;i<n;i++)
	//{
		//printf("%d ",a[i]);
	//}
	//printf("/n");
}
