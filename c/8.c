/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int usr;
    int k;
    scanf("%d",&k);

    int hap=0;

    usr=k;
    while(usr==0){
        hap+=usr;
        usr--;
    }
    usr=k;
    int gop=1;
    for(int i=2;i<=k;i++) gop*=i;

    printf("%d\n%d",k*(k+1)/2,gop);


    return 0;
}