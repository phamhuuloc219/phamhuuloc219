using System;
namespace Bai2_1
{
    class PhanSo
    {
        private int _tuSo;
        private int _mauSo;

        public PhanSo(int ts, int ms)
        {
            _tuSo = ts;
            _mauSo = ms;
        }

        public PhanSo(PhanSo p)
        {
            _tuSo = p._tuSo;
            _mauSo = p._mauSo;
        }

        public void Nhap()
        {
            Console.Write("Nhap tu so: ");
            _tuSo = int.Parse(Console.ReadLine());
            Console.Write("Nhap mau so: ");
            _mauSo = int.Parse(Console.ReadLine());
        }

        public void Xuat()
        {
            Console.WriteLine("{0}/{1}", _tuSo, _mauSo);
        }

        public void ToiGian()
        {
            int gcd = TimUCLN(_tuSo, _mauSo);
            _tuSo /= gcd;
            _mauSo /= gcd;
        }

        public PhanSo Cong(PhanSo p2)
        {
            int ts = _tuSo * p2._mauSo + p2._tuSo * _mauSo;
            int ms = _mauSo * p2._mauSo;
            PhanSo tong = new PhanSo(ts, ms);
            tong.ToiGian();
            return tong;
        }

        public PhanSo Tru(PhanSo p2)
        {
            int ts = _tuSo * p2._mauSo - p2._tuSo * _mauSo;
            int ms = _mauSo * p2._mauSo;
            PhanSo hieu = new PhanSo(ts, ms);
            hieu.ToiGian();
            return hieu;
        }

        private int TimUCLN(int a, int b)
        {
            a = Math.Abs(a);
            b = Math.Abs(b);
            while (a > 0 && b > 0)
            {
                if (a > b)
                {
                    a %= b;
                }
                else
                {
                    b %= a;
                }
            }
            return a + b;
        }
    }

    class Program
    {
        static void Main()
        {
            PhanSo ps1 = new PhanSo(1, 2);
            PhanSo ps2 = new PhanSo(ps1);
            ps1.Nhap();
            ps2.Nhap();
            Console.WriteLine("Phan so 1:");
            ps1.Xuat();
            Console.WriteLine("Phan so 2:");
            ps2.Xuat();
            Console.WriteLine("Phan so 1 sau khi toi gian:");
            ps1.ToiGian();
            ps1.Xuat();
            Console.WriteLine("Phan so 2 sau khi toi gian:");
            ps2.ToiGian();
            ps2.Xuat();
            Console.WriteLine("Tong hai phan so:");
            PhanSo tong = ps1.Cong(ps2);
            tong.Xuat();
            Console.WriteLine("Hieu hai phan so:");
            PhanSo hieu = ps1.Tru(ps2);
            hieu.Xuat();
            Console.ReadLine();
        }
    }
}