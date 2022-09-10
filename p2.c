#include<stdio.h>
#include<math.h>

float c;
int i = 0;

float func(float x)
{
    return x*x*x - 5*x + 1;
}

void bisection(float a, float b,float e)
{
    c=a;
    while((b-a) >= e)
    {
        i++;
        c=(a+b)/2;
         if (func(c) == 0.0)
         {
            printf("Root = %f\n",c);
            break;
        }
        else if (func(c)*func(a) < 0)
        {
                printf("Root = %f\n",c);
                b = c;
        }
        else
        {
                printf("Root = %f\n",c);
                a = c;
        }
    }
}

int main()
{
    float a,b,e;

    printf("Enter value of a and b:\n");
    scanf("%f%f",&a,&b);
    if(func(a)*func(b) >= 0)
    {
        printf("Wrong value of a and b\n");
        return 0;
    }
    printf("Enter allowed error:");
    scanf("%f",&e);
    bisection(a,b,e);

    printf("Accurate Root:%f \n",c);
    printf("Iteration Count:%d",i);
    
    return 0;
}
