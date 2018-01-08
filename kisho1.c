#include<stdio.h>

void main() {
  int num;
  printf("enter the num: \n",num);
  scanf("%d", &num);
  if (num<0)
      printf("%d number is negative \n", num);
  else if (num>0)
      printf("%d number is positive \n", num);
  else
      printf("zero is neither positive nor negative \n", num);
}
