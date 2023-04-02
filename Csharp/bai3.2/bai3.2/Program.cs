using System;
using System.Collections.Generic;

namespace Company
{
    class NhanVien
    {
        public string Ten;
        public DateTime NgaySinh;
        public double Luong;

        public NhanVien(string Ten, DateTime NgaySinh, double Luong)
        {
            this.Ten = Ten;
            this.NgaySinh = NgaySinh;
            this.Luong = Luong;
        }

        public virtual void TinhLuong()
        {
            // do nothing in base class
        }

        public override string ToString()
        {
            return string.Format("{0,-20} {1,-15} {2,10}", Ten, NgaySinh.ToShortDateString(), Luong.ToString("#,##0"));
        }
    }

    class NVVP : NhanVien
    {
        public int NgayLamViec;

        public NVVP(string Ten, DateTime NgaySinh, int NgayLamViec)
            : base(Ten, NgaySinh, 0)
        {
            this.NgayLamViec = NgayLamViec;
        }

        public override void TinhLuong()
        {
            Luong = NgayLamViec * 100000;
        }

        public override string ToString()
        {
            return base.ToString() + string.Format(" {0,10}", NgayLamViec);
        }
    }

    class NVSX : NhanVien
    {
        public int SanPham;

        public NVSX(string Ten, DateTime NgaySinh, int SanPham)
            : base(Ten, NgaySinh, 0)
        {
            this.SanPham = SanPham;
        }

        public override void TinhLuong()
        {
            Luong = 2000000 + SanPham * 5000;
        }

        public override string ToString()
        {
            return base.ToString() + string.Format(" {0,10}", SanPham);
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            List<NhanVien> NhanViens = new List<NhanVien>();

            Console.Write("Nhap so luong nhan vien: ");
            int n = int.Parse(Console.ReadLine());

            for (int i = 0; i < n; i++)
            {
                Console.Write("Nhap loai nhan vien (1 nhan vien van phong, 2 nhan vien san xuat): ");
                int type = int.Parse(Console.ReadLine());

                Console.Write("Nhap ten: ");
                string Ten = Console.ReadLine();

                Console.Write("Nhap ngay sinh (dd/mm/yyyy): ");
                DateTime NgaySinh = DateTime.ParseExact(Console.ReadLine(), "dd/MM/yyyy", null);

                if (type == 1)
                {
                    Console.Write("Nhap so ngay lam viec: ");
                    int NgayLamViec = int.Parse(Console.ReadLine());

                    NhanViens.Add(new NVVP(Ten, NgaySinh, NgayLamViec));
                }
                else if (type == 2)
                {
                    Console.Write("Nhap so luong san pham: ");
                    int SanPham = int.Parse(Console.ReadLine());

                    NhanViens.Add(new NVSX(Ten, NgaySinh, SanPham));
                }
            }

            Console.WriteLine("\nDanh sach nhan vien:");
            Console.WriteLine("{0,-20} {1,-15} {2,10} {3,10}", "Ten", "Ngay sinh", "Tien luong", "(Ngay lam viec/San pham)");
            foreach (NhanVien NhanVien in NhanViens)
            {
                NhanVien.TinhLuong();
                Console.WriteLine(NhanVien);
            }

            NhanViens.Sort((x, y) => y.Luong.CompareTo(x.Luong));

            Console.WriteLine("\nDanh sach nhan vien luong giam dan:");
            Console.WriteLine("{0,-20} {1,-15} {2,10} {3,10}", "Ten", "Ngay sinh", "Tien luong", "(Ngay lam viec/San pham)");
            foreach (NhanVien NhanVien in NhanViens)
            {
                Console.WriteLine(NhanVien);
            }

            Console.ReadKey();
        }
    }
}