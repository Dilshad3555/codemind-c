#include<stdio.h>
int main()
{
  char a;
  scanf("%c",&a);
  if(a=='V' || a=='v')
  {
      printf("Violet");
  }
  else if(a=='I' || a=='i')
  {
      printf("Indigo");
  }
  else if(a=='B' || a=='b')
  {
      printf("Blue");
  }
  else if(a=='G' || a=='g')
  {
      printf("Green");
  }
  else if(a=='Y' || a=='y')
  {
      printf("Yellow");
  }
  else if(a=='O' || a=='o')
  {
      printf("Orange");
  }
  else if(a=='R' || a=='r')
  {
      printf("Red");
  }
  else
  {
      printf("-1");
  }
}
 