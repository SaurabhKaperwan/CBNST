#include<stdio.h>
#include<math.h>
#define f(x) cos(x)-3*x+1
#define g(x) (1+cos(x))/3

int main()
{
    int step=1,N;
    float x0,x1,e;

    printf("Enter initial guess:");
    scanf("%f",&x0);
    printf("Enter tolerable error:");
    scanf("%f",&e);
    printf("Enter maximum iteration:");
    scanf("%d",&N);

    do
    {
        x1=g(x0);
        printf("Step:%d and roots:%f\n",step,x1);
        step++;
        if(step>N)
        {
            printf("Not convergent");
            return 0;
        }
        x0=x1;
    }while(fabs(f(x1))>e);
    printf("Root is %f",x1);
    return 0;
}
