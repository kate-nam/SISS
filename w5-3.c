//
//  main.c
//  5-3
//
//  Created by KMNAM on 2020/05/23.
//  Copyright © 2020 KMNAM. All rights reserved.
//

#include <stdio.h>

int len1(char str[100]){ // 배열 이용해서 문자열 구하는 함수
    int i=0, j=0;
    while(str[i]!='\0') //str 배열에 널값이 나오기 전까지 반복문 실행
        i++;
    if(str[i]=='\0') //널값이 나온 배열의 순서를 j에 저장
        j=i;
    return j;
}
int len2(char str[100]){ // 포인터 이용해서 문자열 구하는 함수
    int i=0, j=0;
    char *p= str; //str 배열을 포인터p 에 지정
    while(*(p+i)!='\0')
        i++;
    if(*(p+i) =='\0')
        j=i;
    return j;
}
int main(){
    int strlen1, strlen2;
    char string[100];
    
    printf("문자열을 입력하세요");
    gets(string);
    
    strlen1= len1(string);
    printf("(배열 이용)문자열 길이: %d\n", strlen1);
    
    strlen2= len2(string);
    printf("(포인터 이용)문자열 길이: %d\n", strlen2);
}
