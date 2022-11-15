#include<stdio.h>
#include<stdlib.h>
int a[100],n;
void create()
{
  int i;
  printf("enter the size of array");
  scanf("%d",&n);
  printf("enetr the elemeent of array");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  }
  void display()
  {
    int i;
   printf("enetr the elemeent of array");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  }
int main()
{
while (1)
  {
   int choice;
    printf("1.create\n2.display\n3.exit\n");
    printf("enter the choice\n");
    scanf("%d",&choice);
    switch(choice)
      {
        case 1:
        create();
        break;
        case 2:
        display();
        break;
        case 3:
        exit(0);
        break;
        default:
        printf("invalid choice");
      }
  };
  return 0;
}
