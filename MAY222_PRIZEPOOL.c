#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int x ,y;
        scanf("%d %d",&x,&y);
        printf("%d\n",10*x+90*y);
    }
    return 0;
}
