#include<stdio.h>

void main() {
  int num;
  printf("enter the num: \n",num);
  scanf("%d", &num);
  if (num%2==0)
      printf("%d number is even \n", num);
  else
      printf("%d number is odd \n", num);
}
