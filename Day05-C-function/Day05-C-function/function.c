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
        printf("0���� ���� �� �����ϴ�!\n");
        return 0;
    }
    return (float)a / b;
}

int main() {
    int choice, x, y;
    printf("1. ���ϱ�\n2. ����\n3. ���ϱ�\n4. ������\n");
    printf("����: ");
    scanf("%d", &choice);

    printf("�� ���ڸ� �Է��ϼ���: ");
    scanf("%d %d", &x, &y);

    switch (choice) {
    case 1:
        printf("���: %d\n", add(x, y));
        break;
    case 2:
        printf("���: %d\n", subtract(x, y));
        break;
    case 3:
        printf("���: %d\n", multiply(x, y));
        break;
    case 4:
        printf("���: %.2f\n", divide(x, y));
        break;
    default:
        printf("�߸��� �����Դϴ�.\n");
    }

    return 0;
}
