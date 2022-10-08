#include <stdio.h>
int main()
{
	int n;
	float ratio;
	printf("Enter no of unknowns:");
	scanf("%d",&n);
	float a[n][n+1];
	float ans[n];
	printf("Enter augumeted matrix:\n");
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n+1; j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%f",&a[i][j]);
		}
	}
	for(int i=0;i<n-1;i++)
	{
		if(a[i][i]==0.0)
		{
			printf("Error");
			return 0;
		}
		for(int j=i+1;j<n;j++)
		{
			ratio=a[j][i]/a[i][i];

			for(int k=0;k<n+1;k++)
			{
				a[j][k]=a[j][k]-ratio*a[i][k];
			}
		}
	}
	ans[n-1]=a[n-1][n]/a[n-1][n-1];
	for(int i=n-2;i>=0;i--)
	{
		ans[i]=a[i][n];
		for(int j=i+1;j<=n;j++)
		{
			ans[i]=ans[i]-a[i][j]*ans[j];
		}
		ans[i]=ans[i]/a[i][i];
	}

	printf("Solutions\n");
	for(int i=0;i<n;i++)
	{
		printf("%f\n",ans[i]);
	}
	return 0;
}
