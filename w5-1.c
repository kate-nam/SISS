//
//  main.c
//  5-1
//
//  Created by KMNAM on 2020/05/23.
//  Copyright © 2020 KMNAM. All rights reserved.
//
#include <string.h>
#include <stdio.h>
int sum(int a, int b){
    return a+b;
}
int minus(int a, int b){
    return a-b;
}
int mul(int a, int b){
    return a*b;
}

int main(void) {
    int x, y;
    char str[10];
    printf("숫자 두개 입력");
    scanf("%d %d", &x, &y);
    printf("연산자 입력(+,=,*)");
    scanf("%s",str);
    if(strcmp(str, "+")==0){
        int result=sum(x,y);
        printf("%d\n", result);
    }
    else if(strcmp(str,"-")==0){
        int result=minus(x,y);
        printf("%d\n", result);
    }
    else if(strcmp(str,"*")==0){
        int result=mul(x,y);
        printf("%d\n", result);
    }
    return 0;
}
