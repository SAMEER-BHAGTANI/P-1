#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,j,temp;

	clrscr();

	for(i=0;i<=4;i++)
	{
		printf("\n\t\t\tEnter %d number : ",i+1);
		scanf("%d",&a[i]);
	}

	for(i=0;i<=4;i++)
	{
		for(j=0;j<=i;j++)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}


	printf("\n\n\t\t\tSorted array is : ");

	for(i=0;i<=4;i++)
	{
		printf("\n\n\t\t\t%d",a[i]);
	}

	getch();
}
