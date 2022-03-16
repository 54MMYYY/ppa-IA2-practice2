#include <stdio.h>

int input_number(){
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  return n;
}

int is_composite(int n){
  int i;
  if(n==0 || n==1){
    return 2;
  }
  else{
    for(i==2;i<=n/2;i++){
      if(n%i==0){
        return 1;
      }
    }
    return 0;
  }  
}

void output(int n, int composite){
  if(composite==0)
    printf("The number %d is a prime number",n);
    
  else if(composite==1)
    printf("The number %d is a composite number",n);
  else
  printf("The number %d is neither a prime nor a composite number",n);
}

int main(){
  int n, composite;
  n=input_number();
  composite=is_composite(n);
  output(n,composite);
  return 0;
}
