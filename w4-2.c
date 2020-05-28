//
//  main.c
//  4-2
//
//  Created by KMNAM on 2020/05/22.
//  Copyright © 2020 KMNAM. All rights reserved.
//

#include <stdio.h>

int main(void){
    int arr[5];
    int *pi=arr;
    int i;
    for(i=0;i<5;i++){
        printf("arr[%d]에 값을 입력:",i);
        scanf("%d", &pi[i]);
    }
    printf("\n");
    for(i=0;i<5;i++){
        printf("arr[%d]의 값:%d\t arr[%d]의 값:%d\n",i,*(pi+i),i,pi[i]);
    }
}
