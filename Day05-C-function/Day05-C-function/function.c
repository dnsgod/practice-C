#pragma warning(disable: 4996)
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) {
        printf("0으로 나눌 수 없습니다!\n");
        return 0;
    }
    return (float)a / b;
}

int main() {
    int choice, x, y;
    printf("1. 더하기\n2. 빼기\n3. 곱하기\n4. 나누기\n");
    printf("선택: ");
    scanf("%d", &choice);

    printf("두 숫자를 입력하세요: ");
    scanf("%d %d", &x, &y);

    switch (choice) {
    case 1:
        printf("결과: %d\n", add(x, y));
        break;
    case 2:
        printf("결과: %d\n", subtract(x, y));
        break;
    case 3:
        printf("결과: %d\n", multiply(x, y));
        break;
    case 4:
        printf("결과: %.2f\n", divide(x, y));
        break;
    default:
        printf("잘못된 선택입니다.\n");
    }

    return 0;
}
