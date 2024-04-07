//
// Created by 86130 on 2024/4/7.
//

# include<stdio.h>
int Bsearch(int *p, int n, int x);
int main(void)
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int x, m;
    scanf("%d",&x);
    m = Bsearch(a, 10, x);
    if(m >= 0)
        printf("Index is %d\n",m);
    else
        printf( "Not Found\n");

    return 0;
}

/* 请在这里填写答案 */
int Bsearch(int *p, int n, int x)
{
    int i=0;
    for(;i<n;i++)
        if(p[i]==x) return i;
    return -1;
}