#include <stdio.h>
int main(void){
    int a[3][3];
    int row, col, time=1;
    printf("original matrix\n");
    for(row=0; row<3; row++){
        for(col=0; col<3; col++){
            printf("%d\t", a[row][col]=time*2);
            time++;
            if(col==2){
                printf("\n");
            }
        }
    }
    printf("transpose matrix\n");
    time=0;
    for(row=0; row<3; row++){
        for(col=0; col<3; col++){
            if((row<col) || (row>col) )
                printf("%d\t", a[col][row]);
            else
                printf("%d\t", a[row][col]);
            if(col==2)
                printf("\n");
        }
    }
    return 0;
}

