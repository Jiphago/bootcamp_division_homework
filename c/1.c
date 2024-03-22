/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int n,a,b,c,d;
    scanf("%d", &n);
    a= n/100;
    b= n/10-a*10;
    c= n%10; 
    d = c*100+b*10+a;
    printf("%d",d);
    
    return 0;
}