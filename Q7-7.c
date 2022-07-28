//Write a program to print all Prime numbers between two given numbers

#include<stdio.h>
int main()
{
    int i,j,a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
    for(j=2;j<i;j++)
    {
        if(i%j==0)
            break;
    }
    if(j==i)
        printf("Prime numbers = %d\n",i);
    }
    return 0;
}

