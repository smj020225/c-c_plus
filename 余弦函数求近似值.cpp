//
// Created by 86130 on 2024/4/7.
//

#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

/* 你的代码将被嵌在这里 */
double funcos( double e, double x )
{
    double d=1;
    int c=1;
    double f=1;
    int b=1;
    int i=0;
    if (x=0)
        return 1;
    else{
        int b=1;
        while(fabs(f/c)<e)
        {
            i=i+2;
            b=-b;
            f=x*x*f;
            c=c*i*(i-1);
            d=f/c*b+d;
        }
    }
    return d;
}