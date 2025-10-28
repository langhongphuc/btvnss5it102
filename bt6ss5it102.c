#include <stdio.h>

int main() {
    double a, b;
    char kitu;

    printf("Nhap so thuc a: ");
    scanf("%lf", &a);
    printf("Nhap so thuc b: ");
    scanf("%lf", &b);
    printf("Nhap toan tu (+, -, *, /): ");
    scanf("%c", &kitu);

    switch (kitu) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", a, b, a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Loi: Khong the chia cho 0\n");
            } else {
                printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);
            }
            break;
        default:
            printf("Loi: Toan tu khong hop le\n");
    }

    return 0;
}

