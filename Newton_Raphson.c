#include <stdio.h>
#include <math.h>
#define E 0.00001
float f(float x)
{
	return 3*x-cos(x)-1;
}
float g(float x)
{
	return 3+sin(x);
}
int main()
{
	float x0,x1;
	int step=0;
	int n;
	printf("Enter max no of iterations:");
	scanf("%d",&n);
	printf("Enter initial guess:");
	scanf("%f",&x0);
	do
	{
		if(g(x0) == 0.0)
		{
			printf("Error");
			return 0;
		}
		step++;
		if(step == n )
		{
			printf("Not converged\n");
			return 0;
		}
		x1=x0-f(x0)/g(x0);
		printf("Roots are : %f and step:%d\n",x1,step);
		x0=x1;
	}while( f(x1) > E );

	printf("Final roots: %f and step:%d",x1,step);
}
