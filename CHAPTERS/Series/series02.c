//1+1/2+1/4+1/8+.........n
#include<stdio.h>
int main()
{
    int i,n;
    float sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        //print the series 1+1/2+1/4+1/8+.........n
        if(i==n)
        {
            printf("1/%d",i);
        }
        else
        {
            printf("1/%d + ",i);
        }
        sum=sum+1.0/i;
    }
    printf("\nSum of %d natural number is %.2f",n,sum);
    return 0;
}