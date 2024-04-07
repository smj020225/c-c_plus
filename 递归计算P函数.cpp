//
// Created by 86130 on 2024/4/7.
//
#include <stdio.h>

double P( int n, double x );

int main()
{
    int n;
    double x;

    scanf("%d %lf", &n, &x);
    printf("%.2f\n", P(n,x));

    return 0;
}

/* 你的代码将被嵌在这里 */
double P( int n, double x )
{
    double s;
    if(n==0) return 1;
    else if(n==1) return x;
    s=((2*n-1)*P(n-1,x)-(n-1)*P(n-2,x))/n;
    return s;
}