#include<stdio.h>
#include<math.h>

float e;
float c;

float func(float x)
{
    return x*x*x - 5*x + 1;
}

void bisection(float a, float b)
{

    c=a;
    while((b-a) >= e)
    {
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
    float a,b;

    printf("Enter value of a and b:\n");
    scanf("%f%f",&a,&b);
    if(func(a)*func(b) >= 0)
    {
        printf("Wrong value of a and b\n");
        return 0;
    }
    printf("Enter allowed error:");
    scanf("%f",&e);
    bisection(a,b);

    printf("Accurate Root:%f",c);
    return 0;
}
