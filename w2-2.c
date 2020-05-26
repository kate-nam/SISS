//
//  main.c
//  2-2
//
//  Created by KMNAM on 2020/04/16.
//  Copyright © 2020 KMNAM. All rights reserved.
//

#include <stdio.h>

int main(void) {
    double year= 365.2422, hour, min, sec;
    hour= year-(int)year;
    year= (int)year;
    hour= hour*24;
    min= hour-(int)hour;
    min= min*60;
    sec= min-(int)min;
    sec= sec*60;
    printf("%d일 %d시간 %d분 %6.2f초", (int)year,(int)hour,(int)min,sec);
}
