//
//  main.c
//  4-3
//
//  Created by KMNAM on 2020/05/22.

#include <stdio.h>
int main(void){
    char s[100], l[100]; // 가장 짧은 문장의 배열과 가장 긴 문장의 배열 저장할 곳(s=short, l=long)
    char put[100]; // 입력받는 문장의 배열
    int min=99, max=0;
    while(1){
        printf("문장을 입력하세요(0입력시 종료):");
        gets(put);
        if(strcmp(put, "0")==0) // 배열이 0과 같으면 반복문 종료
            break;
        int len= strlen(put);
        if(len<min){
            strcpy(s,put);
            min=len;
        }
        if(len>max){
            strcpy(l,put);
            max=len;
        }
    }
    printf("가장 긴 문장(길이): %s", l);
    printf("(%d)\n", max);
    printf("가장 짧은 문장(길이): %s", s);
    printf("(%d)\n", min);
    return 0;
}

