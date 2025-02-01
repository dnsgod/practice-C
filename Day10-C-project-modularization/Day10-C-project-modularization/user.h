#ifndef USER_H
#define USER_H

struct User {
    int id;
    char name[50];
};

void addUser(struct User users[], int* count);
void displayUsers(struct User users[], int count);

#endif
