#include<stdio.h>
#include<math.h>
int sval(int);
int bval(int);
int main()
{   int n;
    float s,b,c;
    printf("enter a number: ");
    scanf("%d",&n);
    s=sval(n);
    b=bval(n);
    c = s*2.0;
    b = b/c;
    printf("sqrt = %f",s + b);
    return 0;
}
int sval(int n)
{
    int s,j,i,b=0;
    s=n;
    for(j=1;j<=n;j++)
    {
        for(i=1;i*i<=s;i++)
        {
            if(s==i*i)
             break;
        }
        if(s==i*i)
        {
            s=i;
            break;
        }
            s--;
            b++;
    }
    return s;
}
int bval(int n)
{
    int s,j,i,b=0;
    s=n;
    for(j=1;j<=n;j++)
    {
        for(i=1;i*i<=s;i++)
        {
            if(s==i*i)
             break;
        }
        if(s==i*i)
        {
            s=i;
            break;
        }
            s--;
            b++;
    }
    return b;
}
