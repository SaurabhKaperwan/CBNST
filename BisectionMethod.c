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
    do
    {
        printf("Enter value of x1\n");
        scanf("%f",&x1);
        printf("Enter value of x2\n");
        scanf("%f",&x2);
        if(func(x1)*func(x2)<0)
            break;
        else
            printf("Enter values again\n");
    }while(1);

    float x0;
    while((x2-x1) >= E)
    {
        x0=(x1+x2)/2.0;
        if(func(x0)==0.0)
            break;
        else if(func(x0)*func(x1)<0)
            x2=x0;
        else
            x1=x0;

    }
    printf("Roots are : %f",x0);
    return 0;
}
