using System;
public class NhanVien
{
    public string MaNV { get; set; }
    public string HoTen { get; set; }
    public static double LCB = 1500000;
    public void nhap()
    {
        Console.WriteLine("Nhap ma NV: ");
        MaNV = Console.ReadLine();
        Console.WriteLine("Ho ten NV: ");
        HoTen = Console.ReadLine();
    }
    public NhanVien(string ms, string ht)

    {

        MaNV = ms;

        HoTen = ht;
    }
    public virtual double TinhLuong()
    {
        return 0;
    }
}

class NVVP : NhanVien
{
    public int SoNgayCong;
    public NVVP(string ms = "", string ht = "", int nc = 0) : base(ms, ht)
    {
        SoNgayCong = nc;
    }
    public void Print()
    {
        Console.WriteLine("{0}\t{1}\t{2}", MaNV, HoTen,SoNgayCong);
    }

    public override double TinhLuong()
    {
        // công thức tính lương nvvp là lươngCB*số ngày công
        return LCB * SoNgayCong / 5;
    }
}
public class NVSX : NhanVien
{
    public int SoSP;
    public NVSX(string ms="", string ht="", int sosp = 0) : base(ms, ht)
    {
        SoSP = sosp;
    }
    public void Print()
    {
        Console.WriteLine("{0}\t{1}\t{2}", MaNV, HoTen,SoSP);
    }
    public override double TinhLuong()
    {
        //lcb*sosp/8
        return LCB * SoSP / 8;
    }
}
class program
{
    public static void Main()
    {
        //tạo 1 đối tượng nhân viên tổng quát nhưng thuộc loiaj văn phòng 
        NhanVien nv1 = new NVVP("VP01", "Pham Huu Loc", 30);
        //tạo 1 đối tượng nhân viên tổng quát nhưng thuộc loiaj sx
        NhanVien nv2 = new NVVP("SX02", "Pham Huu Tinh", 50);
        //tính lương nv1
        Console.WriteLine("Luong cua nhan vien 1 la {0}",nv1.TinhLuong());
        //tính lương nv2
        Console.WriteLine("Luong cua nhan vien 2 la {0}", nv2.TinhLuong());
        Console.ReadLine();
    }
}