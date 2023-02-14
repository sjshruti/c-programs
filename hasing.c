#include <stdio.h>
#include <stdlib.h>

int ht[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int n =10;

void insert(int key)
{
  int i;
int hash = key % 10;
  
if(ht[hash] == -1)
{
  ht[hash] = key;
}
else
{
  int j = 1;

while(j<n)
  {
    hash = (hash + j)%10;
    
   if(ht[hash]== -1)
   {
     ht[hash]=key;
     j++;
     break;
   }
  }
}
}
void display()
{
  int i;
  for(i=0;i<n;i++)
  printf("%d\t",ht[i]);
}
int main()
{
  int ch=1,key;
  while(ch>0)
    {
      printf("Choose your option \n1. Insert\n2. Display\n3. Exit\n");
      scanf("%d",&ch);
      switch(ch)
        {
          case 1: printf("Enter the element to be inserted to stop enter -1:: \t");
scanf("%d",&key);
insert(key);
break;
case 2: printf("\nThe elements are :: \n");
display();
break;
case 3: exit(0);
default: printf("Invalid option");
        }
    }
}
