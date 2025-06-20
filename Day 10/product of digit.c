// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int n,sum=1;
  printf("Enter the num:");
  scanf("%d",&n);
  while(n>0){
      sum*=n%10;
      n/=10;
  }
  printf("%d",sum);

    return 0;
}
