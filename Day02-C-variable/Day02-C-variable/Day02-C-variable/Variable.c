#pragma warning(disable: 4996)
#include <stdio.h>

int main() {
    int age;
    float height;
    char grade;

    printf("���̸� �Է��ϼ���: ");
    scanf("%d", &age);

    printf("Ű�� �Է��ϼ��� (cm): ");
    scanf("%f", &height);

    printf("������ �Է��ϼ��� (A, B, C): ");
    scanf(" %c", &grade);

    printf("�Է��� ����: %d\n", age);
    printf("�Է��� Ű: %.1f cm\n", height);
    printf("�Է��� ����: %c\n", grade);

    return 0;
}
