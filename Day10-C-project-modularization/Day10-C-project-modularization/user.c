#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>
#include "user.h"

void addUser(struct User users[], int* count) {
    printf("ȸ�� ID �Է�: ");
    scanf("%d", &users[*count].id);
    printf("ȸ�� �̸� �Է�: ");
    scanf("%s", users[*count].name);
    (*count)++;
}

void displayUsers(struct User users[], int count) {
    printf("\nȸ�� ���:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, �̸�: %s\n", users[i].id, users[i].name);
    }
}