//Write a program to check whether a given number is an Armstrong number or not

#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,rem,sum=0,count=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    temp=n;
    for(;temp!=0;)
    {
        temp=temp/10;
        count=count+1;
    }
    temp=n;
    for(;temp!=0;)
    {
        rem=temp%10;
        sum=sum+pow(rem,count);
        temp=temp/10;
    }
    if(n==sum)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");
    return 0;
}
