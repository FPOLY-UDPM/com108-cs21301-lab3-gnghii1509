/******************************************************************************
 * Họ và tên: [Tôn Thất Gia Nghi]
 * MSSV:      [PS48181]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>
#include <math.h>

int main()
{

    // Khai báo biến
    int choice;

    // Xử lý, tính toán VÀ Hiển thị kết quả
    do
    {
        printf("\n========== MENU ==========\n");
        printf("1. Giai phuong trinh bac 1\n");
        printf("2. Giai phuong trinh bac 2\n");
        printf("3. Tinh tien dien\n");
        printf("0. Thoat\n");
        printf("==========================\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);

        switch (choice)
        {

        // ===== BÀI 1: PHƯƠNG TRÌNH BẬC 1 =====
        case 1:
        {
            float a, b, x;
            printf("Nhap a: ");
            scanf("%f", &a);
            printf("Nhap b: ");
            scanf("%f", &b);

            if (a == 0)
            {
                if (b == 0)
                    printf("Phuong trinh co vo so nghiem\n");
                else
                    printf("Phuong trinh vo nghiem\n");
            }
            else
            {
                x = -b / a;
                printf("Nghiem x = %.2f\n", x);
            }
            break;
        }

        // ===== BÀI 2: PHƯƠNG TRÌNH BẬC 2 =====
        case 2:
        {
            float a, b, c, delta, x1, x2;
            printf("Nhap a: ");
            scanf("%f", &a);
            printf("Nhap b: ");
            scanf("%f", &b);
            printf("Nhap c: ");
            scanf("%f", &c);

            if (a == 0)
            {
                if (b == 0)
                {
                    if (c == 0)
                        printf("Phuong trinh co vo so nghiem\n");
                    else
                        printf("Phuong trinh vo nghiem\n");
                }
                else
                {
                    printf("Nghiem x = %.2f\n", -c / b);
                }
            }
            else
            {
                delta = b * b - 4 * a * c;
                if (delta < 0)
                {
                    printf("Phuong trinh vo nghiem\n");
                }
                else if (delta == 0)
                {
                    printf("Nghiem kep x = %.2f\n", -b / (2 * a));
                }
                else
                {
                    x1 = (-b + sqrt(delta)) / (2 * a);
                    x2 = (-b - sqrt(delta)) / (2 * a);
                    printf("x1 = %.2f\n", x1);
                    printf("x2 = %.2f\n", x2);
                }
            }
            break;
        }

        // ===== BÀI 3: TÍNH TIỀN ĐIỆN =====
        case 3:
        {
            int kwh;
            long tien = 0;
            printf("Nhap so dien (kWh): ");
            scanf("%d", &kwh);

            if (kwh <= 50)
                tien = kwh * 1678;
            else if (kwh <= 100)
                tien = 50 * 1678 + (kwh - 50) * 1734;
            else if (kwh <= 200)
                tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
            else if (kwh <= 300)
                tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
            else if (kwh <= 400)
                tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
            else
                tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;

            printf("So tien phai dong: %ld dong\n", tien);
            break;
        }

        case 0:
            printf("Thoat chuong trinh\n");
            break;

        default:
            printf("Lua chon khong hop le!\n");
        }

    } while (choice != 0);

    return 0;
}
