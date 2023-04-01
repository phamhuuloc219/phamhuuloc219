using System;
using System.Collections.Generic;

class Xe
{
    public string bienSo;
    public int namSanXuat;
    public double gia;
    public Xe()
    {
        bienSo = "";
        namSanXuat = 0;
        gia = 0;
    }
    public Xe(string bs, int nsx, double g)
    {
        this.bienSo = bs;
        this.namSanXuat = nsx;
        this.gia = g;
    }
    public virtual void Nhap()
    {
        Console.Write("Nhap bien so: ");
        bienSo = Console.ReadLine();
        Console.Write("Nhap nam san xuat: ");
        namSanXuat = int.Parse(Console.ReadLine());
        Console.Write("Nhap gia: ");
        gia = double.Parse(Console.ReadLine());
    }
    public virtual void Xuat()
    {
        Console.WriteLine("-------------------------------------");
        Console.WriteLine("Bien so: {0}", bienSo);
        Console.WriteLine("Nam san xuat: {0}", namSanXuat);
        Console.WriteLine("Gia: {0} trieu dong", gia);
    }
    public double Gia
    {
        get { return gia; }
    }
}
class XeCon : Xe
{
    private int soChoNgoi;
    private string loaiXe;
    public XeCon() : base()
    {
        soChoNgoi = 0;
        loaiXe = "";
    }
    public XeCon(string bs, int nsx, double g, int scn, string lx) : base(bs, nsx, g)
    {
        soChoNgoi = scn;
        loaiXe = lx;
    }
    public override void Nhap()
    {
        base.Nhap();
        Console.Write("Nhap so cho ngoi: ");
        soChoNgoi = int.Parse(Console.ReadLine());
        Console.Write("Nhap loai xe (sedal/SUV/ban tai): ");
        loaiXe = Console.ReadLine();
        Console.WriteLine("-------------------------------------");
    }
    public override void Xuat()
    {
        base.Xuat();
        Console.WriteLine("So cho ngoi: {0}", soChoNgoi);
        Console.WriteLine("Loai xe: {0}", loaiXe);
    }
}
class Program
{
    static void Main(string[] args)
    {
        List<XeCon> listXeCon = new List<XeCon>();
        int n;
        Console.Write("Nhap so luong xe con: ");
        n = int.Parse(Console.ReadLine());
        for (int i = 0; i < n; i++)
        {
            XeCon xeCon = new XeCon();
            xeCon.Nhap();
            listXeCon.Add(xeCon);
        }
        // In ra danh sach xe va thong so kem theo
        foreach (XeCon xeCon in listXeCon)
        {
            xeCon.Xuat();
            Console.WriteLine();
        }
        // Tim xe co gia thap nhat, cao nhat
        double minGia = listXeCon[0].Gia;
        double maxGia = listXeCon[0].Gia;
        XeCon xeMinGia = listXeCon[0];
        XeCon xeMaxGia = listXeCon[0];
        for (int i = 1; i < listXeCon.Count; i++)
        {
            if (listXeCon[i].Gia < minGia)
            {
                minGia = listXeCon[i].Gia;
                xeMinGia = listXeCon[i];
            }
            if (listXeCon[i].Gia > maxGia)
            {
                maxGia = listXeCon[i].Gia;
                xeMaxGia = listXeCon[i];
            }
        }

        Console.WriteLine("-------------------------------------");
        Console.WriteLine("Xe co gia thap nhat:");
        xeMinGia.Xuat();
        Console.WriteLine();

        Console.WriteLine("-------------------------------------");
        Console.WriteLine("Xe co gia cao nhat:");
        xeMaxGia.Xuat();
        Console.WriteLine();        

        Console.ReadLine();
    }
}