/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int usr=0;
    while (usr<=0){
    scanf("%d",&usr);
    if(usr<=0)
        printf("X\n"); 
    else break;
    }
    int k=0;
    for(int i=1;i<=usr;i++){
        k+=i;
    }
    printf("%d", k);
    return 0;
}