#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target, guess;

    srand(time(NULL));  // 난수 생성 초기화
    target = rand() % 100 + 1;  // 1~100 사이의 숫자 생성

    printf("1부터 100 사이의 숫자를 맞혀보세요!\n");

    while (1) {
        printf("숫자를 입력하세요: ");
        scanf("%d", &guess);

        if (guess > target) {
            printf("더 작은 숫자입니다.\n");
        } 
        else if (guess < target) {
            printf("더 큰 숫자입니다.\n");
        } 
        else {
            printf("정답입니다! 숫자는 %d였습니다.\n", target);
            break;
        }
    }

    return 0;
}
