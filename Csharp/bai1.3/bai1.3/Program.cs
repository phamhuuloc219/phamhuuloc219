/*
Một loại vi trùng cứ sau mỗi giờ lại nhân đôi. Hỏi ban đầu có n con vi trùng thì sau h giờ số lượng là bao nhiêu?

Input:
- Số lượng vi trùng ban đầu (con)
- Khoảng thời gian (giờ).

Output: Số lượng vi trùng sau khoảng thời gian đã cho.
*/
using System;

class Program
{
    static void Main()
    {
        // Nhập số lượng vi khuẩn ban đầu
        Console.Write("So luong vi khuan ban đau (con): ");
        int n = int.Parse(Console.ReadLine());

        // Nhập khoảng thời gian
        Console.Write("Khoang thoi gian (gio): ");
        int h = int.Parse(Console.ReadLine());

        // Tính và in ra số lượng vi khuẩn sau h giờ
        double x = n * Math.Pow(2, h);
        Console.WriteLine("So luong vi khuan sau {0} gio la {1} con.", h, x);
        Console.ReadLine();
    }
}