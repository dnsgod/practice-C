#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>
#include "user.h"

void addUser(struct User users[], int* count) {
    printf("회원 ID 입력: ");
    scanf("%d", &users[*count].id);
    printf("회원 이름 입력: ");
    scanf("%s", users[*count].name);
    (*count)++;
}

void displayUsers(struct User users[], int count) {
    printf("\n회원 목록:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, 이름: %s\n", users[i].id, users[i].name);
    }
}