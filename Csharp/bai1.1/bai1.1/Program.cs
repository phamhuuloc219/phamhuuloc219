/*
Viết chương trình tính tiền điện phải trả dựa vào số kWh tiêu thụ và bảng giá.

Bảng giá:
Số kWh <= 100: 2000 đ/kWh
Từ kWh thứ 101 đến 150: 2500 đ/kWh
Từ kWh thứ 151 trở đi 3000 đ/kWh
Nếu số kWh tiêu thụ vượt quá 300 thì cộng thêm 10% tiền phải trả.

Input: Số kWh tiêu thụ
Output: Số tiền phải thanh toán (VND)
*/

using System;

namespace TinhTienDien
{
    class Program
    {
        // Khai báo các hằng 
        const int Muc1 = 100, Muc2 = 150, Muc3 = 300;
        const int Gia1 = 2000, Gia2 = 2500, Gia3 = 3000;

        static void Main()
        {
            int sokWh = 0;
            double sotien = 0;

            // Input
            // Viết code của bạn để xử lý nhập số kWh tiêu thụ 
            Console.Write("Nhap so kWh tieu thu: ");
            sokWh = int.Parse(Console.ReadLine());
            // Process
            // Viết code của bạn để tính số tiền vào biến sotien
            // Chỉ tính số tiền, không in ra kết quả ở phần này
            if (sokWh <= Muc1)
            {
                sotien = sokWh * Gia1;
            }
            else if (sokWh <= Muc2)
            {
                sotien = Muc1 * Gia1 + (sokWh - Muc1) * Gia2;
            }
            else
            {
                sotien = Muc1 * Gia1 + 50 * Gia2 + (sokWh - Muc2) * Gia3;
            }

            // Nếu số kWh tiêu thụ vượt quá 300, cộng thêm 10% tiền phải trả
            if (sokWh > Muc3)
            {
                sotien *= 1.1;
            }
            // Output
            Console.WriteLine("So tien: {0}", sotien);
            Console.ReadLine();
        }
    }
}