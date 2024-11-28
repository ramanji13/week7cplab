#include<stdio.h>
int main() {
    int m,n,a,b;
    printf("enter the value of m for rows and n for columns");
    scanf("%d\t%d",&m,&n);
     printf("enter the value of a for rows and b for columns");
    scanf("%d\t%d",&a,&b);
    int x[m][n];
    int y[a][b];
     int A[m][b];
    int i,j,k,h=1,sum=0;
    if(n!=a) printf("we cannot multiply the matrices\n");
    else{
        for(int i=0; i<m; i++) {
            printf("enter %d row elements\n",i+1);
            for(int j=0; j<n; j++) {
                scanf("%d",&x[i][j]);
            }
        }
         for(int i=0;i<a;i++) {
            printf("enter %d row elements\n",i+1);
            for(int j=0;j<b; j++) {
                scanf("%d",&y[i][j]);
            }
        }
        
        for(int i=0;i<m; i++) {
            for(int j=0;j<b; j++) {
            sum=0;
            for(int k=0;k<n;k++){
            sum+=x[i][k]*y[k][j];
            }A[i][j]=sum;            
            }
        }
       
    
    for(int i=0;i<m; i++) {
        for(int j=0;j<n; j++) {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
}
}
