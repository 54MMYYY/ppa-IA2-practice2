#include <stdio.h>

int input_side(){
  int a,b,c;
  printf("Enter the length of a side: ");
  scanf("%d",&a);
}

int check_scalene(int a, int b, int c){
  int isscalene;
  if(a!=b && a!=c && b!=c){
    isscalene=0;
  }
  return isscalene;
}

void output(int a, int b, int c, int isscalene){
  if(isscalene==0){
    printf("The triangle iss scalene for lengths %d,%d,%d",a,b,c);
  }
  printf("The triangle is not scalene for lengths %d,%d,%d",a,b,c);
}

int main(){
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}

