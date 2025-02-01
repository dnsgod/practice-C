#pragma warning(disable: 4996)
#include <stdio.h>
#include "user.h"

int main() {
    struct User users[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n1. 회원 추가\n2. 회원 목록 출력\n3. 종료\n선택: ");
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
            printf("잘못된 입력입니다.\n");
        }
    }

    return 0;
}
