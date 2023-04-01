using System;

class PhanSo : IComparable<PhanSo>
{
    private int _tu;
    private int _mau;

    public PhanSo() { }
    public PhanSo(int tu, int mau)
    {
        _tu = tu;
        _mau = mau;
    }

    public void Nhap()
    {
        Console.Write("Nhap tu so: ");
        _tu = int.Parse(Console.ReadLine());
        Console.Write("Nhap mau so: ");
        _mau = int.Parse(Console.ReadLine());
    }

    public void Xuat()
    {
        Console.WriteLine("{0}/{1}", _tu, _mau);
    }

    public float GiaTri()
    {
        return (float)_tu / _mau;
    }

    public int CompareTo(PhanSo other)
    {
        if (GiaTri() < other.GiaTri())
            return -1;
        else if (GiaTri() > other.GiaTri())
            return 1;
        else
            return 0;
    }
}

class DSPhanSo
{
    private PhanSo[] _dsPS;
    private int _size;

    public DSPhanSo()
    {
        _dsPS = null;
        _size = 0;
    }

    public void Nhap()
    {
        Console.Write("Nhap so phan tu: ");
        _size = int.Parse(Console.ReadLine());

        _dsPS = new PhanSo[_size];
        for (int i = 0; i < _size; i++)
        {
            Console.WriteLine("Nhap phan so thu {0}:", i + 1);
            _dsPS[i] = new PhanSo();
            _dsPS[i].Nhap();
        }
    }

    public void Xuat()
    {
        for (int i = 0; i < _size; i++)
        {
            Console.Write("Phan so thu {0}: ", i + 1);
            _dsPS[i].Xuat();
        }
    }

    public PhanSo TimMax()
    {
        PhanSo max = _dsPS[0];
        for (int i = 1; i < _size; i++)
        {
            if (_dsPS[i].CompareTo(max) > 0)
            {
                max = _dsPS[i];
            }
        }
        return max;
    }

    public void SapXep()
    {
        Array.Sort(_dsPS);
    }
}

class Program
{
    static void Main(string[] args)
    {
        DSPhanSo dsps = new DSPhanSo();

        // Nhập danh sách phân số
        dsps.Nhap();

        // In danh sách phân số
        Console.WriteLine("Danh sach phan so:");
        dsps.Xuat();

        // Tìm phân số lớn nhất
        PhanSo max = dsps.TimMax();
        Console.Write("Phan so lon nhat la: ");
        max.Xuat();

        // Sắp xếp danh sách phân số theo thứ tự tăng dần
        dsps.SapXep();
        Console.WriteLine("Danh sach phan so sau khi sap xep:");
        dsps.Xuat();
        Console.ReadLine();
    }
}