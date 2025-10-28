#include <stdio.h>

int main() {
    int metkhoi_nuoc;
    int tong_tien = 0;

    printf("Nhap so met khoi nuoc da su dung: ");
    scanf("%d", &metkhoi_nuoc);

    if (metkhoi_nuoc <= 10) {
        tong_tien = metkhoi_nuoc * 6000;
    } else if (metkhoi_nuoc <= 20) {
        tong_tien = 10 * 6000 + (metkhoi_nuoc - 10) * 7000;
    } else if (metkhoi_nuoc <= 30) {
        tong_tien = 10 * 6000 + 10 * 7000 + (metkhoi_nuoc - 20) * 8500;
    } else {
        tong_tien = 10 * 6000 + 10 * 7000 + 10 * 8500 + (metkhoi_nuoc - 30) * 10000;
    }

    printf("So tien phai tra la: %d VND\n", tong_tien);

    return 0;
}
