//
//  main.c
//  3-1
//
//  Created by KMNAM on 2020/05/13.
//  Copyright © 2020 KMNAM. All rights reserved.
//

#include <stdio.h>
int sum(int a, int b);
int mul(int a, int b);
int main(void) {
    int x, y;
    int result=0;
    scanf("%d%d", &x, &y);
    result= sum(x,y);
    printf("%d\n", result);
    result= mul(x,y);
    printf("%d\n", result);
    return 0;
}
int sum(int a, int b){
    int c=a+b;
    return c;
}
int mul(int a, int b){
    int c=a*b;
    return c;
}
