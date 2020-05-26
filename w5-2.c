//
//  main.c
//  5-2
//
//  Created by KMNAM on 2020/05/23.
//  Copyright © 2020 KMNAM. All rights reserved.
//

#include <stdio.h>
int compare(char s1[100], char s2[100]){
    int i=0, result=0;
    while(s1[i]!='\0' && s2[i]!='\0'){ //두 문자열이 널값이 아닐때 반복문 실행
        if(s1[i]!=s2[i]){ //문자열이 다르면 result에 1을 저장하고 반복문을 빠져나옴
            result=1;
            break;
        }
        i++; //i값을 하나씩 늘려 배열에 문자열을 차례대로 비교
    }
    if(result==0 && s1[i]=='\0' && s2[i]=='\0') //문자열이 같아 result값이 0이면 1을 반환
        return 1;
    else
        return 0; // 문자열이 다르면 0을 반환
}
int main(void){
    char str1[100], str2[100];
    int cmp;
    printf("두 문자열을 입력하세요\n");
    gets(str1); //두 문자열을 입력받음
    gets(str2);
    cmp= compare(str1, str2); // 함수 호출
    if(cmp==1) // 함수의 반환값이 1이면 같다고 출력
        printf("같습니다.\n");
    else // 함수의 반환값이 0이면 다르다고 출력
        printf("다릅니다.\n");
}

