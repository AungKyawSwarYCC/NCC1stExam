#include<stdio.h>
int add(int x, int y);
int main()
{
    int a;
    int b;
    int sum;
    printf("a");
    scanf("%d",&a);
    printf("b");
    scanf("%d",&b);
    sum=add(a,b);
    printf("sum %d",sum);
    return 0;
}
int add(int x, int y)
{
    return(x+y);
}
