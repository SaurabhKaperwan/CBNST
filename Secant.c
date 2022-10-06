#include <stdio.h>
#include <math.h>
#define E 0.001
float func(float x)
{
	return x*x*x-x*x+2;
}

float findX(float x1,float x2)
{
	return (x1*func(x2)-x2*func(x1))/(func(x2)-func(x1));
}
int main()
{
	float x1,x2,x;
	int n;
	printf("Enter x1:");
	scanf("%f",&x1);
	printf("Enter x2:");
	scanf("%f",&x2);
	printf("Enter max number of iterations:");
	scanf("%d",&n);
	int i=0;
	do
	{
		x=findX(x1,x2);
		x1=x2;
		x2=x;
		printf("Iterations:%d and Roots:%f\n",++i,x);
		if(fabs(x1-x2)<E)
		{
			printf("Final Root:%f and Total iterations: %d \n",x,i );
			return 0;
		}
	}while(i<n);

	printf("Final Roots:%f",x);
}
