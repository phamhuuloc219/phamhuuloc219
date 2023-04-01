using System;

namespace Bai33
{
    abstract public class HINH
    {
        public int c, d;
        public double x, y, r;
        abstract public double TinhDT();

        public void Nhap(int a)
        {
            if (a == 1)
            {
                Console.Write(" Nhap Chieu Dai : ");
                x = Double.Parse(Console.ReadLine());
                Console.Write("Nhap Chieu Rong : ");
                y = Double.Parse(Console.ReadLine());
            }
            if (a == 2)
            {
                Console.WriteLine("Nhap Toa Do Tam Hinh Tron ( x , y ) : ");
                Console.Write("x = ");
                c = Int32.Parse(Console.ReadLine());
                Console.Write("y = ");
                d = Int32.Parse(Console.ReadLine());
                Console.Write("Nhap Ban Kinh : ");
                r = Double.Parse(Console.ReadLine());
            }
        }
        public void Xuat(int a)
        {
            if (a == 1)
            {
                Console.WriteLine(" Chieu Dai : " + x);
                Console.WriteLine("Chieu Rong : " + y);
            }
            if (a == 2)
            {
                Console.WriteLine("Ban Kinh : " + r);
                Console.WriteLine("Toa Do Tam : ( " + c + " , " + d + " )");
            }
        }
    }
    public class HCN : HINH
    {
        public override double TinhDT()
        {
            return (x * y);
        }
    }
    public class HINHTRON : HINH
    {
        public override double TinhDT()
        {
            return (Math.PI * r * r);
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            int n;
            do
            {
                Console.WriteLine("1.Tinh Dien Tich Hinh Chu Nhat.");
                Console.WriteLine("2.Tinh Dien Tich Hinh Tron.");
                Console.WriteLine("3.Thoat.");
                Console.Write("Chon 1 Trong 3 : ");
                n = Int32.Parse(Console.ReadLine());
                switch (n)
                {
                    case 1:
                        {
                            HCN cn = new HCN();
                            Console.WriteLine("Nhap Thong Tin Hinh Chu Nhat");
                            cn.Nhap(1);
                            Console.WriteLine("Thong Tin Hinh Chu Nhat");
                            cn.Xuat(1);
                            Console.WriteLine();
                            Console.WriteLine("Dien Tich Hinh Chu Nhat : " + cn.TinhDT());
                            Console.ReadLine();
                            Console.Clear();
                            break;
                        }
                    case 2:
                        {
                            HINHTRON ht = new HINHTRON();
                            Console.WriteLine("Nhap Thong Tin Hinh Tron");
                            ht.Nhap(2);
                            Console.WriteLine("Thong Tin Hinh Tron");
                            ht.Xuat(2);
                            Console.WriteLine();
                            Console.WriteLine("Dien Tich Hinh Tron : " + ht.TinhDT());
                            Console.ReadLine();
                            Console.Clear();
                            break;
                        }
                    case 3: continue;
                }
            }
            while (n != 3);
        }
    }
}