#include <stdio.h>
int digiAdd(int n){
    if(n==0) return 0;
    int r=n%10;
   int sum=r+digiAdd(n/10);
    return sum;
}
int main() {
  int n;
  printf("enter the value of n \n");
  scanf("%d",&n);
  int sum=digiAdd(n);
  printf("%d",sum);
    return 0;
}
