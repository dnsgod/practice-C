#pragma warning(disable: 4996)
#include <stdio.h>
#include "user.h"

int main() {
    struct User users[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n1. ȸ�� �߰�\n2. ȸ�� ��� ���\n3. ����\n����: ");
        scanf("%d", &choice);

        if (choice == 1) {
            addUser(users, &count);
        }
        else if (choice == 2) {
            displayUsers(users, count);
        }
        else if (choice == 3) {
            break;
        }
        else {
            printf("�߸��� �Է��Դϴ�.\n");
        }
    }

    return 0;
}
