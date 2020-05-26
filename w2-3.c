//
//  main.c
//  2-3
//
//  Created by KMNAM on 2020/04/16.
//  Copyright © 2020 KMNAM. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int a,b;
    printf("정수의 값을 입력하세요");
    scanf("%d", &a);
    b= ~a; //비트연산자로 0과 1의 값을 바꿈
    b++; //위의 값에 1을 더함
    printf("입력한 수%d은 %d로 변경되었습니다\n",a,b);
    return 0;
}
