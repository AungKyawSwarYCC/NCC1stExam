#include<stdio.h>
int main()
{
    int i;  //row
    int j;  //column
    int x;  //height of pyramid
    printf("Height of pyramid : ");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=(2*x-1);j++)
        {
           if(j>=x-(i-1))
           {
               if(j<=x+(i-1))
               {
                   printf("*");
               }
           }
           else
           {
                printf(" ");
           }
        }
        printf("\n");
    }
    return 0;
}
