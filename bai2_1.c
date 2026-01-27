/******************************************************************************
 * Họ và tên: [Tôn Thất Gia Nghi]
 * MSSV:      [PS48181]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH  
//  2.1 BẬC 1 
//  Phương trình có dạng ax + b = 0 
//  Input: nhập vào từ bàn phím giá trị của a, b 
//  Output: Hiển thị nghiệm của phương trình 
//  Biết rằng: 
//  Nếu a == 0,  
//   b == 0: Phương trình có vô số nghiệm 
//   b != 0: Phương trình vô nghiệm 
//  Ngược lại: Phương trình có nghiệm x = -b/a 
 
#include <stdio.h>

int main() {
    float a, b, x;
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);

    switch (a == 0) {
        case 1: // a == 0
            switch (b == 0) {
                case 1:
                    printf("Phuong trinh co vo so nghiem");
                    break;
                case 0:
                    printf("Phuong trinh vo nghiem");
            }
            break;

        case 0: // a != 0
            x = -b / a;
            printf("Phuong trinh co nghiem x = %.2f", x);
    }

    return 0;
}
