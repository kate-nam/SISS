#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b; //a,b는 정수
    printf("입력\n");
    scanf("%d\n%d", &a,&b);//입력하는 두 정수를 a,b에 저장
    if(a >= 1 && a <= 9 && b >=1 && b <= 9) { //a,b는 1이상 9이하의 수일때 사칙연산을 수행함
    printf("출력\n%d\n%d\n%d\n%.0f\n", a+b, a-b, a*b, floor(a/b));//나눗셈의 값의 소수점 이하는 버림
    }
}
