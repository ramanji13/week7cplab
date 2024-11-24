#include<stdio.h>
int main() {
    int n,i=0,count=0,r,h;
    printf("enter value of n \n");
    scanf("%d",&n);
    int a[10];
    while(n!=0){
    r=n%2;
    a[i]=r;
    n=n/2;
    i++;
    }
    
    for(h=0; h<i; h++) {
        printf("%d ",a[h]);
    }
}
