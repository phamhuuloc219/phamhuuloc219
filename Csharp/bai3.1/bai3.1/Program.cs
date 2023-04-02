using System;
using System.Collections.Generic;
using System.Linq;

class Xe
{
    public string BienSo { get; set; }
    public int NamSanXuat { get; set; }
    public double Gia { get; set; }

    public Xe()
    {
        BienSo = "";
        NamSanXuat = 0;
        Gia = 0.0;
    }

    public Xe(string bienSo, int namSanXuat, double gia)
    {
        BienSo = bienSo;
        NamSanXuat = namSanXuat;
        Gia = gia;
    }

    public virtual void Nhap()
    {
        Console.Write("Nhap bien so: ");
        BienSo = Console.ReadLine();
        Console.Write("Nhap nam san xuat: ");
        NamSanXuat = int.Parse(Console.ReadLine());
        Console.Write("Nhap gia: ");
        Gia = double.Parse(Console.ReadLine());
    }

    public virtual void Xuat()
    {
        Console.WriteLine("Bien so: {0}", BienSo);
        Console.WriteLine("Nam san xuat: {0}", NamSanXuat);
        Console.WriteLine("Gia: {0} trieu dong", Gia);
    }
}

class XeCon : Xe
{
    public int SoChoNgoi { get; set; }
    public string LoaiXe { get; set; }

    public XeCon() : base()
    {
        SoChoNgoi = 0;
        LoaiXe = "";
    }

    public XeCon(string bienSo, int namSanXuat, double gia, int soChoNgoi, string loaiXe)
        : base(bienSo, namSanXuat, gia)
    {
        SoChoNgoi = soChoNgoi;
        LoaiXe = loaiXe;
    }

    public override void Nhap()
    {
        base.Nhap();
        Console.Write("Nhap so cho ngoi: ");
        SoChoNgoi = int.Parse(Console.ReadLine());
        Console.Write("Nhap loai xe: ");
        LoaiXe = Console.ReadLine();
    }

    public override void Xuat()
    {
        base.Xuat();
        Console.WriteLine("So cho ngoi: {0}", SoChoNgoi);
        Console.WriteLine("Loai xe: {0}", LoaiXe);
    }
}

class Program
{
    static void Main(string[] args)
    {
        List<XeCon> dsXeCon = new List<XeCon>();
        Console.Write("Nhap so luong xe con: ");
        int n = int.Parse(Console.ReadLine());

        for (int i = 0; i < n; i++)
        {
            Console.WriteLine("Nhap thong tin xe thu {0}", i + 1);
            XeCon xe = new XeCon();
            xe.Nhap();
            dsXeCon.Add(xe);
        }

        Console.WriteLine("Danh sach xe:");
        foreach (XeCon xe in dsXeCon)
        {
            xe.Xuat();
            Console.WriteLine("------------------------------");
        }

        // Tim xe co gia thap nhat, cao nhat
        XeCon xeGiaThapNhat = dsXeCon.OrderBy(x => x.Gia).First();
        XeCon xeGiaCaoNhat = dsXeCon.OrderByDescending(x => x.Gia).First();
        Console.WriteLine("Xe co gia thap nhat:");
        xeGiaThapNhat.Xuat();
        Console.WriteLine("Xe co gia cao nhat:");
        xeGiaCaoNhat.Xuat();

        // Tim xe thuoc tinh
        Console.Write("Nhap 2 chu so dau cua bien so xe: ");
        string tinh = Console.ReadLine();
        Console.WriteLine("Xe thuoc tinh {0}:", tinh);
        foreach (XeCon xe in dsXeCon)
        {
            if (xe.BienSo.StartsWith(tinh))
            {
                xe.Xuat();
                Console.WriteLine("------------------------------");
            }
        }

        // Sap xep danh sach xe theo nam san xuat
        dsXeCon = dsXeCon.OrderBy(x => x.NamSanXuat).ToList();
        Console.WriteLine("Danh sach xe sau khi sap xep:");
        foreach (XeCon xe in dsXeCon)
        {
            xe.Xuat();
            Console.WriteLine("------------------------------");
        }
        Console.ReadLine();
    }
}