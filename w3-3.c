//
//  main.c
//  3-3
//
//  Created by KMNAM on 2020/05/13.
//  Copyright © 2020 KMNAM. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int a[5], i;
    for(i=0; i<5; i++){
        scanf("%d", &a[i]);
    }
    int max=a[0], min=a[0], sum=0;
    for(i=0; i<5; i++){
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
        sum+=a[i];
    }
    printf("%d\n%d\n%d\n", max, min, sum);
    return 0;
}
