#include<stdio.h>
int main() {
    int m,n;

    printf("enter the value of m for rows");
    scanf("%d",&m);
    printf("enter the value of n for columns");
    scanf("%d",&n);
    int x[m][n];
    int A[m][n];
    int i,j,k,h=1;
    printf("enter value for how many matrices you want to add\n");
    scanf("%d",&k);
    while(h<=k) {
        for(int i=0; i<m; i++) {
            printf("enter %d row elements\n",i+1);
            for(int j=0; j<n; j++) {
                scanf("%d",&x[i][j]);
                A[i][j]+=x[i][j];
            }
        }
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                printf("%d\t",x[i][j]);
            }printf("\n");
        }
        h++;
    }
    printf("\n");
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {

            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }


}
