#include <stdio.h>

int main() {
    float heSoLuong;
    int soNgayCong;
    int chucVu;
    long phuCap;
    long thuong;
    long luong;

    printf("Nhap he so luong (float): ");
    scanf("%f", &heSoLuong);

    printf("Nhap so ngay cong trong thang (int): ");
    scanf("%d", &soNgayCong);

    printf("Nhap chuc vu (1: Nhan vien, 2: To truong, 3: Quan ly): ");
    scanf("%d", &chucVu);

    switch (chucVu) {
        case 1:
            phuCap = 500000;
            break;
        case 2:
            phuCap = 1000000;
            break;
        case 3:
            phuCap = 2000000;
            break;
        default:
            phuCap = 0;
            printf("Chuc vu khong hop le.\n");
            return 1;
    }

    if (soNgayCong > 26) {
        thuong = (soNgayCong - 26) * 200000;
    } else {
        thuong = 0;
    }
    luong = (long)(soNgayCong * 160000 * heSoLuong) + phuCap + thuong;

    printf("\nTong luong la: %ld VND\n", luong);

    return 0;
}
