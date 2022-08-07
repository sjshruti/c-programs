#include <stdio.h>

int main()
{
int a,b,ans;
char op;
printf("enter the operation");
scanf("%c",&op);
printf("enter the operands");
scanf("%d%d",&a,&b);

  switch(op)
    {
      case'+':
        ans=a+b;
        break;
      case'-':
        ans=a-b;
        break;
      case'*':
        ans=a*b;
        break;
      case'/': 
        ans=a/b;
        break;
      default:printf("invalid item");
    }
printf("\n answer = %d",ans);
return 0;
}
