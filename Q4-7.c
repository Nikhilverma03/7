//Write a program to calculate HCF of two numbers

#include<stdio.h>
int main()
{
    int m,n,i,HCF;
    printf("Enter two numbers: ");
    scanf("%d %d",&m,&n);
    for(i=1;i<=m&&i<=n;i++)
    {
        if(m%i==0&&n%i==0)
            HCF=i;
    }
    printf("HCF of %d and %d is = %d",m,n,HCF);
    return 0;
}
