//
//  main.c
//  BMI
//
//  Created by KMNAM on 2020/04/16.
//  Copyright © 2020 KMNAM. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int a;
    float b, x;
    printf("몸무게를 입력하세요(kg):");
    scanf("%d", &a);
    printf("키를 입력하세요(m):");
    scanf("%f", &b);
    x= a/(b*b);
    printf("당신의 BMI는 %.1f입니다\n", x);
    return 0;
}
