#include<stdio.h>
int main()
{
  int i=0,j=0;
  char str1[50],str2[50],str3[50];
  printf("enter the string");
  scanf("%s%s",str1,str2);
  while(str1[i]!='\0')
    {
      str3[j]=str1[i];
      i++;
      j++;
    }
  i=0;
  while(str2[i]!='\0')
    {
      str3[j]=str2[i];
      i++;
      j++;
    }
  str3[j]='\0';
  printf("\n%s",str3);
  return 0;
}
