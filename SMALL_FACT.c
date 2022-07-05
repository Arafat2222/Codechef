#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n,fact=1;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("%d\n",fact);
    }
}
