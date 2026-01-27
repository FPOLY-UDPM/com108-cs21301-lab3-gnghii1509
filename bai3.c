/******************************************************************************
 * Họ và tên: [Tôn Thất Gia Nghi]
 * MSSV:      [PS48181]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng
 
#include <stdio.h>

int main()
{

    // Khai báo biến
    int kwh;
    long tien = 0;

    // Nhập dữ liệu
    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%d", &kwh);

    // Xử lý, tính toán VÀ Hiển thị kết quả
    if (kwh <= 50)
    {
        tien = kwh * 1678;
    }
    else if (kwh <= 100)
    {
        tien = 50 * 1678 + (kwh - 50) * 1734;
    }
    else if (kwh <= 200)
    {
        tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
    }
    else if (kwh <= 300)
    {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
    }
    else if (kwh <= 400)
    {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
    }
    else
    {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
    }

    printf("So tien phai dong: %ld dong la: ", tien);

    return 0;
}
