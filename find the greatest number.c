/******************************************************************************
Name :- Ashwini Haral
Assignment No :-6
Write a program which will accept three integer numbers from user and find out greatest
among them using conditional operator.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int n1,n2, n3;
  printf("enter the value of three numbers:");
  scanf("%d%d%d",&n1,&n2,&n3);
  
  if(n1>n2 && n1 >n3)
  printf("%d is greatest number",n1);
  
  else if(n2>n1 && n2>n3)
  {
      printf("%d is greatest number",n2);
  }
  else
  printf("%d is greatest number",n3);
    return 0;
}
