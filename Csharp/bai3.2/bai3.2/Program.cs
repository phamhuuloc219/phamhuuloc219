using System;
using System.Collections.Generic;

class NhanVien
{
    protected string hoTen;
    protected DateTime ngaySinh;
    protected double luong;
    public NhanVien(string hoTen, DateTime ngaySinh)
    {
        this.hoTen = hoTen;
        this.ngaySinh = ngaySinh;
    }
    public virtual void TinhLuong(){}
    public override string ToString()
    {
        return $"-{hoTen}:\n +{ngaySinh.ToString("dd/MM/yyyy")} \n +Luong:{luong}\n";
    }
}
class NhanVienVanPhong : NhanVien
{
    private int soNgayLamViec;
    public NhanVienVanPhong(string hoTen, DateTime ngaySinh, int soNgayLamViec) : base(hoTen, ngaySinh)
    {
        this.soNgayLamViec = soNgayLamViec;
    }
    public override void TinhLuong()
    {
        luong = soNgayLamViec * 100000;
    }
}
class NhanVienSanXuat : NhanVien
{
    private int soSanPham;
    public NhanVienSanXuat(string hoTen, DateTime ngaySinh, int soSanPham) : base(hoTen, ngaySinh)
    {
        this.soSanPham = soSanPham;
    }
    public override void TinhLuong()
    {
        luong = 1000000 + soSanPham * 5000;
    }
}
class Program
{
    static void Main(string[] args)
    {
        List<NhanVien> danhSachNhanVien = new List<NhanVien>();
        Console.Write("Nhap so luong nhan vien: ");
        int n = int.Parse(Console.ReadLine());
        for (int i = 0; i < n; i++)
        {
            Console.WriteLine($"Nhap thong tin cho nhan vien thu {i + 1}:");
            Console.Write("Ho ten: ");
            string hoTen = Console.ReadLine();
            Console.Write("Ngay sinh (dd/MM/yyyy): ");
            DateTime ngaySinh = DateTime.ParseExact(Console.ReadLine(), "dd/MM/yyyy", null);
            Console.Write("Loai nhan vien (1 - Nhan vien van phong, 2 - Nhan vian san xuat): ");
            int loaiNhanVien = int.Parse(Console.ReadLine());
            if (loaiNhanVien == 1)
            {
                Console.Write("So ngay lam viec: ");
                int soNgayLamViec = int.Parse(Console.ReadLine());
                NhanVienVanPhong nhanVienVanPhong = new NhanVienVanPhong(hoTen, ngaySinh, soNgayLamViec);
                danhSachNhanVien.Add(nhanVienVanPhong);
            }
            else if (loaiNhanVien == 2)
            {
                Console.Write("So san pham: ");
                int soSanPham = int.Parse(Console.ReadLine());
                NhanVienSanXuat nhanVienSanXuat = new NhanVienSanXuat(hoTen, ngaySinh, soSanPham);
                danhSachNhanVien.Add(nhanVienSanXuat);
            }
        }
        Console.WriteLine("Danh sach nhan vien:");
        foreach (NhanVien nhanVien in danhSachNhanVien)
        {
            nhanVien.TinhLuong();
            Console.WriteLine(nhanVien.ToString());
        }
        Console.ReadLine();
    }
}