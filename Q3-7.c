//Write a program to check whether a given number is there in the Fibonacci series or not.

#include<Stdio.h>
int main()
{
    int a=0,b=1,c,i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    if(c==n)
        {
        printf("%d is there in the fibonacci series",n);
        break;
        }
    if(c>n)
        {
        printf("%d is not there in the fibonacci series",n);
        break;
        }
    }
    return 0;
}
