#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=0;
    while(n!=0)
    {
        int res=n%10;
        s=s+res;
        n=n/10;
    }
    printf("%d",s);
}