#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	float ratio;
	float ans[n];
	printf("Enter number of unknowns:\n");
	scanf("%d",&n);
	float a[n][n+1];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n+1;j++)
		{
			printf("Enter a[%d][%d]:",i,j);
			scanf("%f",&a[i][j]);
		}
	}


	for(int i=0;i<n;i++)
	{
		if(a[i][i]==0.0)
		{
			printf("Mathematical Error\n");
			return 0;
		}
		for(int j=0;j<n;j++)
		{
			if(i!=j)
			{
				ratio=a[j][i]/a[i][i];

				for(int k=0;k<n+1;k++)
				{
					a[j][k]=a[j][k]-(ratio*a[i][k]);
				}
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		ans[i]=a[i][n]/a[i][i];
		printf("\nans[%d]:%f",i,ans[i]);
	}

}
