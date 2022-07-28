//Write a program to check whether two given numbers are co-prime numbers or not

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
    if(HCF==1)
        printf("%d and %d are co-prime",m,n);
    else
        printf("%d and %d are not co-prime",m,n);

    return 0;
}

