using System;

class NhanVien
{
    private string maNV;
    private string hoTen;
    private double heSoLuong;
    private static double mucLuongCoBan = 1500000;

    public string MaNV
    {
        get { return maNV; }
        set
        {
            if (value.Length > 0)
                maNV = value;
        }
    }

    public string HoTen
    {
        get { return hoTen; }
        set
        {
            if (value.Length > 0)
                hoTen = value;
        }
    }

    public double HeSoLuong
    {
        get { return heSoLuong; }
        set
        {
            if (value >= 2 && value <= 6)
                heSoLuong = value;
        }
    }

    public NhanVien(string maNV, string hoTen, double heSoLuong)
    {
        MaNV = maNV;
        HoTen = hoTen;
        HeSoLuong = heSoLuong;
    }

    public NhanVien()
    {
        MaNV = "";
        HoTen = "";
        HeSoLuong = 0;
    }

    public void Nhap()
    {
        Console.Write("Nhap ma nhan vien: ");
        MaNV = Console.ReadLine();
        Console.Write("Nhap ho va ten: ");
        HoTen = Console.ReadLine();
        Console.Write("Nhap he so luong: ");
        HeSoLuong = double.Parse(Console.ReadLine());
    }

    public void Xuat()
    {
        Console.WriteLine("Ma nhan vien: {0}", MaNV);
        Console.WriteLine("Ho va ten: {0}", HoTen);
        Console.WriteLine("He so luong: {0}", HeSoLuong);
    }

    public static double MucLuongCoBan
    {
        get { return mucLuongCoBan; }
        set { mucLuongCoBan = value; }
    }

    public double TinhLuong()
    {
        return mucLuongCoBan * heSoLuong;
    }

    public static void InNhanVienCoLuongCaoNhat(NhanVien[] dsNV)
    {
        double maxLuong = 0;
        for (int i = 0; i < dsNV.Length; i++)
        {
            if (dsNV[i].TinhLuong() > maxLuong)
                maxLuong = dsNV[i].TinhLuong();
        }
        Console.WriteLine("Danh sach nhan vien co luong cao nhat:");
        for (int i = 0; i < dsNV.Length; i++)
        {
            if (dsNV[i].TinhLuong() == maxLuong)
                dsNV[i].Xuat();
        }
    }
}

class Program
{
    static void Main(string[] args)
    {
        Console.Write("Nhap so nhan vien: ");
        int n = int.Parse(Console.ReadLine());

        NhanVien[] dsNV = new NhanVien[n];

        for (int i = 0; i < n; i++)
        {
            dsNV[i] = new NhanVien();
            Console.WriteLine("Nhap thong tin nhan vien thu {0}", i + 1);
            dsNV[i].Nhap();
        }

        Console.WriteLine("Danh sach nhan vien:");
        for (int i = 0; i < n; i++)
        {
            dsNV[i].Xuat();
        }

        NhanVien.InNhanVienCoLuongCaoNhat(dsNV);

        Console.ReadKey();
    }
}