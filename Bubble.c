#include<stdio.h>
int main() {
    int n;
    printf("enter the value of n for number of values\n");
    scanf("%d",&n);
    int x[n];
    int i,j;
    for(i=0; i<n; i++) {
        printf("index %d value\t",i);
        scanf("%d",&x[i]);
    }
    for(int h=0; h<n; h++) {
        for(j=0; j<n; j++) {
            if(x[j]>x[j+1]) {
                int temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
    for(int k=0; k<n; k++) {
        printf("%d\t",x[k]);
    }
}
