#include<stdio.h>
int main() {
    int n,i,count=0;
    printf("enter value of n for how many binary numbers you want to print\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
        if(a[i]==0){
            a[i]=1;
       }
       else{
            a[i]=0;
            }

    }
    for(int i=n-1; i>=0; i--) {
        if(a[i]==0){
         a[i]=1;
         break;
        }
    }for(int i=n-1; i>=0; i--) {
        if(a[i]!=0){
         count++;
        }
    }if(count==n) printf("1 ");
    for(i=0; i<n; i++) {
        printf("%d ",a[i]);
    }
}
