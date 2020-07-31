#include<stdio.h>

double pow(int x,int y)
{
    double result=1.0;
    int i;
    if(y==0)
    {
        result=1;
    }
    else if(y>0)
    {
        for(i=1;i<=y;i++)
        {
            result *= x;
        }
    }
    else
    {
        for(i=1;i<=-y;i++)
        {
            result *= x;
        }
        result=1/result;
    }
    return result;
}

int testPowTwo(int x)
{
    if(x<=0)return 0;
    while(x>1)
    {
        if((x%2)==1)return 0;
        x=x/2;
    }
    return 1;
}


int fibonacci(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    int fib1,fib2,i,fib;
    fib1=1;
    fib2=1;
    for(i=3;i<=n;i++)
    {
        fib=fib1+fib2;
        fib1=fib2;
        fib2=fib;
    }
    return fib;
}

int isPrime(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    int flag=0;
    int i;
    for(i=2;(i*i)<=n;i++)
    {
        if((n%i)==0)return 0;
    }
    return 1;
}


void assignment1()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%lf\n",9*pow(a,5)+13*pow(b,-2)-15*pow(c,10));
}

void assignment2()
{
    int a,b,i;
    while(1)
    {
        scanf("%d %d",&a,&b);
        for(i=a;i<=b;i++)
        {
            if(testPowTwo(i)==1)
            {
                printf("%d ",i);
            }
        }
        printf("\n");
    }
}

void assignment3()
{
    int n;
    while(1)
    {
        scanf("%d",&n);
        printf("%d\n\n",fibonacci(n));
    }
}

void assignment4()
{
    int n;
    while(1)
    {
        scanf("%d",&n);
        printf("%d\n\n",isPrime(n));
    }
}

void assignment5()
{
    int k,i,fib,count;
    count=0;
    while(1)
    {
        scanf("%d",&k);
        i=3;
        while(count<k)
        {
            fib= fibonacci(i);
            if(isPrime(fib)==1)
            {
                count++;
                printf("%d ",fib);
            }
            i++;
        }
        printf("\n\n");
    }
}


int main()
{
    assignment5();
    return 0;
}
