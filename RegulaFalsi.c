#include <stdio.h>
#include <math.h>
#define E 0.01
float func(float x)
{
    return x*x*x-x*x+2;
}

float main()
{
    float x1,x2;
    int n;
    printf("Enter max number of Iterations:");
    scanf("%d",&n);
    do
    {
        printf("\nEnter value of x1\n");
        scanf("%f",&x1);
        printf("Enter value of x2\n");
        scanf("%f",&x2);
        if(func(x1)*func(x2)<0)
            break;
        else
            printf("Enter values again\n");
    }while(1);

    float x;
    int i=0;
    for(;i<n;i++)
    {
        x=(x1*func(x2)-x2*func(x1))/(func(x2)-func(x1));
        if(func(x)==0.0)
            break;
        else if(func(x)*func(x1)<0)
            x2=x;
        else
            x1=x;

        printf("Iterations:%d and Roots:%f \n",i,x);

        if(fabs(x2-x1)<E)
        {
            printf("Total Iterations: %d and Roots: %f \n",i,x);
            return 0;
        }
    }
    printf("Roots are : %f and Total Iterations: %d",x,--i);
    return 0;
}
