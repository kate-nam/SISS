//
//  main.c
//  2-2
//
//  Created by KMNAM on 2020/04/16.
//  Copyright © 2020 KMNAM. All rights reserved.
//

#include <stdio.h>

int main() {
    double year, sec, a, b;
    int day, hour, min;
    year = 365.2422;
    day= (int)(year); // 365.2422의 소수점을 버리고 정수로 변환
    a= (year-day)*24; // 0.2422일을 5.81288시간으로 바꿈
    hour= (int)(a); // 정수형으로 바꿈. 5시간
    b= (a - hour) * 60; //0.81288시간을 48.768분으로 바꿈
    min= (int)(b); // 정수형으로 바꿈. 48분
    sec= (b-min)*60; //0.768분을 46.08초로 바꿈
    printf("%.4f일은 %d일 %d시간 %d분 %.2f초입니다.\n", year, day, hour, min, sec);
    return 0;
}
