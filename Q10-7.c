//Write a program to print all Armstrong numbers under 1000

#include<stdio.h>
int main()
{
    int i,n,rem,sum;
    for(i=1;i<=1000;i++)
    {
        sum=0;
        n=i;
        for(;n!=0;)
        {
            rem=n%10;
            sum=sum+(rem*rem*rem);
            n=n/10;
        }
        if(sum==i)
            printf("%d\n",i);
        }
        return 0;
}
