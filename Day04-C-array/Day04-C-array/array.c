#pragma warning(disable: 4996)
#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;

    printf("5개의 숫자를 입력하세요:\n");

    for (int i = 0; i < 5; i++) {
        printf("숫자 %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("합계: %d\n", sum);

    return 0;
}
