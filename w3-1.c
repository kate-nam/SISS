
#include <stdio.h>
int sum(int a, int b){
    return a+b;
}
int mul(int a, int b){
    return a*b;
}

int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    printf("%d\n%d\n4", sum(a,b), mul(a,b));
    return 0;
}
