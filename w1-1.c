#include <stdio.h>

#include <stdio.h>
int main(int argc, const char * argv[])  {
    float f, c; //화씨,섭씨온도는 실수형 변수
    printf("화씨 온도를 입력하세요:");
    scanf("%f", &f);
    c=(f-32)/1.8; //화씨온도를 섭씨로 바꿔주는 함수
    printf("섭씨 온도는 %.1f도 입니다\n", c); //소수점 첫째자리까지만 나타나게 함
    return 0;
}
