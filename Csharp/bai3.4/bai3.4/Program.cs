using System;
using System.Collections.Generic;
using System.Linq;

namespace bai3._4
{
    class Printer
    {
        public string NSX;
        public double Gia;
        public Printer(string NSX, double Gia)
        {
            this.NSX = NSX;
            this.Gia = Gia;
        }

        public virtual void Input()
        {
            Console.WriteLine("Inputting...");
        }

        public virtual void Output()
        {
            Console.WriteLine("Outputting...");
        }
    }
    class LaserPrinter : Printer
    {
        public string DoPhanGiai;

        public LaserPrinter(string NSX, double Gia, string DoPhanGiai)
            : base(NSX, Gia)
        {
            this.DoPhanGiai = DoPhanGiai;
        }

        public override void Input()
        {
            base.Input();
            Console.WriteLine("Laser printing...");
        }

        public override void Output()
        {
            base.Output();
            Console.WriteLine("Laser printing...");
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Nhap so luong may in laser: ");
            int n = int.Parse(Console.ReadLine());
            List<LaserPrinter> printers = new List<LaserPrinter>();
            for (int i = 0; i < n; i++)
            {
                Console.Write("Nhap NSX: ");
                string NSX = Console.ReadLine();
                Console.Write("Nhap Gia: ");
                double Gia = double.Parse(Console.ReadLine());
                Console.Write("Nhap do phan giai (dpi): ");
                string DoPhanGiai = Console.ReadLine();
                LaserPrinter printer = new LaserPrinter(NSX, Gia, DoPhanGiai);
                printers.Add(printer);
            }

            // Hiển thị danh sách máy in với thông tin chi tiết của chúng
            Console.WriteLine("Danh sach máy in laser :");
            foreach (LaserPrinter printer in printers)
            {
                Console.WriteLine($"NSX: {printer.NSX}");
                Console.WriteLine($"Gia: {printer.Gia}");
                Console.WriteLine($"DoPhanGiai: {printer.DoPhanGiai}");
            }

            // Tìm máy in với giá thấp nhất và cao nhất
            LaserPrinter GiaThapNhat = printers.OrderBy(p => p.Gia).First();
            LaserPrinter GiaCaoNhat = printers.OrderByDescending(p => p.Gia).First();
            Console.WriteLine("May in co gia thap nhat:");
            Console.WriteLine($"NSX: {GiaThapNhat.NSX}");
            Console.WriteLine($"Gia: {GiaThapNhat.Gia}");
            Console.WriteLine($"DoPhanGiai: {GiaThapNhat.DoPhanGiai}");
            Console.WriteLine("May in co gia cao nhat:");
            Console.WriteLine($"NSX: {GiaCaoNhat.NSX}");
            Console.WriteLine($"Gia: {GiaCaoNhat.Gia}");
            Console.WriteLine($"DoPhanGiai: {GiaCaoNhat.DoPhanGiai}");

            // Lọc danh sách máy in theo nhà sản xuất
            Console.Write("Nhap NSX de loc: ");
            string LocNSX = Console.ReadLine();
            List<LaserPrinter> LocPrinters = printers.Where(p => p.NSX == LocNSX).ToList();
            Console.WriteLine("Danh sach may in da loc:");
            foreach (LaserPrinter printer in LocPrinters)
            {
                Console.WriteLine($"NSX: {printer.NSX}");
                Console.WriteLine($"Gia: {printer.Gia}");
                Console.WriteLine($"DoPhanGiai: {printer.DoPhanGiai}");
            }

            // Sắp xếp danh sách máy in theo giá
            List<LaserPrinter> SapXep = printers.OrderBy(p => p.Gia).ToList();
            Console.WriteLine("Sap xep danh sach may in:");
            foreach (LaserPrinter printer in SapXep)
            {
                Console.WriteLine($"NSX: {printer.NSX}");
                Console.WriteLine($"Gia: {printer.Gia}");
                Console.WriteLine($"DoPhanGiai: {printer.DoPhanGiai}");
            }
        }
    }
}
