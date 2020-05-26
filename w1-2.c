#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b, c, d; //a,b,c,d는 모두 양의 정수
    printf("분수의 합을 입력하시오:");
    scanf("%d/%d+%d/%d", &a, &b, &c, &d);// a/b+c/d= a*d+b*c/b*d 분수의 합
    printf("분수의 합= %d/%d", a*d+c*b, b*d);// 분수 합의 분모 분자에 들어갈 식
    return 0;
}
