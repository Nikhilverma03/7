//Write a program to print first N terms of Fibonacci series

#include<Stdio.h>
int main()
{
    int a=0,b=1,c,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("%d ",b);
    for(int i=1;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
    return 0;
}
