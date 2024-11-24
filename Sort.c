#include<stdio.h>
int main() {
    int x[5]= {2,5,9,1,3};
    int n=5,temp,i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++) {
            if (x[j]>x[j+1]) {
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d",x[i]);
    }
}
