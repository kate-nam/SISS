//
//  main.c
//  4-1
//
//  Created by KMNAM on 2020/05/22.
//  Copyright © 2020 KMNAM. All rights reserved.
//

#include <stdio.h>

void reverse(int *p1, int *p2, int *p3){
    int p=*p1;
    *p1=*p3;
    *p3=*p2;
    *p2=p;
}
int main(void){
    int num1=10;
    int num2=20;
    int num3=30;
    printf("num1:%d, num2:%d, num3:%d\n", num1, num2, num3);
    reverse(&num1, &num2, &num3);
    printf("num1:%d, num2=%d, num3=%d\n", num1, num2, num3);
    return 0;
}
