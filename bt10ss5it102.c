#include <stdio.h>

int main() {
    int loaiHo;
    float soKwh, tienBacThang, phuPhi, tongTienDien;

    printf("Nhap so kWh dien tieu thu trong thang: ");
    scanf("%f", &soKwh);

    printf("Nhap loai ho tieu dung (1: Ho gia dinh, 2: Ho kinh doanh, 3: Ho san xuat): ");
    scanf("%d", &loaiHo);

    if (soKwh >= 0 && soKwh <= 50) {
        tienBacThang = soKwh * 1500;
    } else if (soKwh > 50 && soKwh <= 100) {
        tienBacThang = 50 * 1500 + (soKwh - 50) * 2000;
    } else if (soKwh > 100 && soKwh <= 200) {
        tienBacThang = 50 * 1500 + 50 * 2000 + (soKwh - 100) * 2500;
    } else if (soKwh > 200) {
        tienBacThang = 50 * 1500 + 50 * 2000 + 100 * 2500 + (soKwh - 200) * 3000;
    } else {
        printf("So kWh khong hop le.\n");
        return 1;
    }

    switch (loaiHo) {
        case 1:
            phuPhi = tienBacThang * 0.05;
            break;
        case 2:
            phuPhi = tienBacThang * 0.10;
            break;
        case 3:
            phuPhi = tienBacThang * 0.08;
            break;
        default:
            printf("Loai ho tieu dung khong hop le.\n");
            return 1;
    }

    tongTienDien = tienBacThang + phuPhi;

    printf("Tong tien dien phai tra la: %.2f VND\n", tongTienDien);

    return 0;
}
