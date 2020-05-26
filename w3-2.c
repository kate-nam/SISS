#include <stdio.h>

int main() {
    int a[3][3], i, j, k=1;
    printf("original matrix\n");
    for(i=0; i<3;i++){
        for(j=0;j<3;j++){
            a[i][j]=2*k;
            printf("%d\t", a[i][j]);
            k++;
        }
        printf("\n");
    }
    printf("transpose matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j)
                printf("%d\t", a[i][j]);
            else
                printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
    
 }

