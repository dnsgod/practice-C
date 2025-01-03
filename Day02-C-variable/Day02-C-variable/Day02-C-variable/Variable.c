#pragma warning(disable: 4996)
#include <stdio.h>

int main() {
    int age;
    float height;
    char grade;

    printf("나이를 입력하세요: ");
    scanf("%d", &age);

    printf("키를 입력하세요 (cm): ");
    scanf("%f", &height);

    printf("성적을 입력하세요 (A, B, C): ");
    scanf(" %c", &grade);

    printf("입력한 나이: %d\n", age);
    printf("입력한 키: %.1f cm\n", height);
    printf("입력한 성적: %c\n", grade);

    return 0;
}
