//Write a program to find next Prime number of a given number

#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=n+1;1;i++)
    {
    for(j=2;j<i;j++)
    {
        if(i%j==0)
            break;
    }
    if(j==i)
        break;
    }
    printf("Next prime number is = %d",i);
    return 0;
}

