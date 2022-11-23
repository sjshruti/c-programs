#include<stdio.h>
#include<stdlib.h>
int top = -1,size = 5;
void push(int);
int pop();
int display();
int s[5];
int main()
{
  while(1)
    {
      int ch,item;
      printf("enter your choice\n");
      printf("1.push\n 2.pop\n 3.display\n 4.exit\n");
      scanf("%d",&ch);
      switch(ch)
        {
          case 1: printf("enter the element to be push");
                  scanf("%d",&item);
                  push(item);
                  break;
          case 2: item = pop();
                  printf("item deleted %d",item);
                  break;
          case 3: display();
                  break;
          case 4: exit(0);
          default:printf("invalid operation");
          
        }
    }
  return 0;
}
void push(int item)
{
  if(top==size-1)
  {
    printf("stack overflow");
  }
  else
  {
    top=top+1;
    s[top]=item;
  }
}
int pop()
{
  int item_deleted;
  if(top==-1)
  {
    printf("stack undeflow");
    return -1;
  }
  else
  {
    item_deleted=s[top];
    top --;
    return item_deleted;
  }
}
int display()
{
  int i;
  if(top==-1)
  {
    printf("stack is empty");
  }
  else
  {
    printf("the stack element is:\n");
    for(i=0;i<=top;i++)
      {
        printf("%d",s[i]);
      }
  }
}

