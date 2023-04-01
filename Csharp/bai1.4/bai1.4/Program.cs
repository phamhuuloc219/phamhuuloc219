/*
Viết chương trình C# thực hiện các công việc sau (mỗi chức năng xây dựng thành một hàm):
a) Nhập một mảng n số nguyên từ bàn phím.
b) In các phần tử của mảng lên màn hình.
c) Trả về phần tử lớn nhất của mảng.
d) Trả về kiểu boolean kiểm tra mảng đã được sắp xếp tăng dần chưa.
e) Sắp xếp mảng theo thứ tự tăng dần.
f) Tách mảng thành 2 mảng con: một mảng chứa các phần tử chẵn, mảng còn lại chứa các phần tử lẻ.
*/
using System;

class Program
{
    static void Main(string[] args)
    {
        int n;
        int[] arr;
        bool sapXep;

        n = nhapPtu();
        arr = nhapMang(n);

        Console.WriteLine("Cac phan tu cua mang la:");
        PrintArray(arr);

        Console.WriteLine($"Phan tu lon nhat trong mang la: {timMax(arr)}");

        sapXep = SapXepMang(arr);
        if (sapXep)
        {
            Console.WriteLine("Mang đa đuoc sap xep tang dan.");
        }
        else
        {
            Console.WriteLine("Mang chua đuoc sap xep tang dan.");
            Console.WriteLine("Sap xep mang theo thu tu tang dan:");
            SortArray(arr);
            PrintArray(arr);
        }

        int[] mangChan, mangLe;
        tachMang(arr, out mangChan, out mangLe);

        Console.WriteLine("Mang cac so chan:");
        PrintArray(mangChan);

        Console.WriteLine("Mang cac so le:");
        PrintArray(mangLe);

        Console.ReadLine();
    }

    static int nhapPtu()
    {
        Console.Write("Nhap so luong phan tu cua mang: ");
        return int.Parse(Console.ReadLine());
    }

    static int[] nhapMang(int n)
    {
        int[] arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            Console.Write($"Nhap phan tu thu {i + 1}: ");
            arr[i] = int.Parse(Console.ReadLine());
        }
        return arr;
    }

    static void PrintArray(int[] arr)
    {
        foreach (int x in arr)
        {
            Console.Write($"{x} ");
        }
        Console.WriteLine();
    }

    static int timMax(int[] arr)
    {
        int max = arr[0];
        for (int i = 1; i < arr.Length; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        return max;
    }

    static bool SapXepMang(int[] arr)
    {
        for (int i = 0; i < arr.Length - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                return false;
            }
        }
        return true;
    }

    static void SortArray(int[] arr)
    {
        Array.Sort(arr);
    }

    static void tachMang(int[] arr, out int[] mangChan, out int[] mangLe)
    {
        int demChan = 0;
        int demLe = 0;

        for (int i = 0; i < arr.Length; i++)
        {
            if (arr[i] % 2 == 0)
            {
                demChan++;
            }
            else
            {
                demLe++;
            }
        }

        mangChan = new int[demChan];
        mangLe = new int[demLe];

        int PtuChan = 0;
        int PtuLe = 0;

        for (int i = 0; i < arr.Length; i++)
        {
            if (arr[i] % 2 == 0)
            {
                mangChan[PtuChan] = arr[i];
                PtuChan++;
            }
            else
            {
                mangLe[PtuLe] = arr[i];
                PtuLe++;
            }
        }
    }
}
