#include <stdio.h>

int main() 
{
    int a,n,m,pal=0;
    
    printf("enter number:\n");
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
    m=n%10;
    n=n/10;
    pal=pal*10+m;
    
    }
    if(pal==a)
    {
        printf("palindrome %d",pal);
    }
    else
    {
    printf("given number is not palindrome");
    }
    return 0;
}
