#include <stdio.h>

int main() {
    char kytu;

    printf("Nhap mot ki tu: ");
    scanf("%c", &kytu);

    if (kytu >= 'a' && kytu <= 'z') {
        printf("Chu hoa tuong ung: %c\n", kytu - 32);
    } else if (kytu >= 'A' && kytu <= 'Z') {
        printf("Chu thuong tuong ung: %c\n", kytu + 32);
    } else {
        printf("Khong phai chu cai.\n");
    }

    return 0;
}

