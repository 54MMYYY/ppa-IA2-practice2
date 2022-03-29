#include <stdio.h>

int input_side(){
  int a;
  printf("Enter the length of the sides of the triangle\n");
  scanf("%d",&a);
  return a;
}

int check_scalene(int a, int b, int c){
  int isscalene;
  if(a!=b && b!=c && a!=c){
    isscalene=0;
  }
  return isscalene;
}

void output(int a, int b, int c, int isscalene){
  if(isscalene==0){
    printf("The triangle with sides %d %d and %d is scalene",a,b,c);
  }
  else{
  printf("The triangle with sides %d %d and %d is not scalene",a,b,c);
    }
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

