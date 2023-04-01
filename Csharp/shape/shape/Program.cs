// Minh họa cơ chế đa hình

using System;

public class Shape
{
    protected string Name;

    public Shape(string name = "")
    {
        Name = name;
    }

    // Phương thức ảo tính diện tích
    public virtual double Area()
    {
        return 0;
    }

    // Phương thức ảo in thông tin
    public virtual void Print() { }
}

// Lớp hình tròn (Circle) kế thừa lớp hình vẽ
public class Circle : Shape
{
    public double Radius;
    public Circle(string name = "", double r = 0) : base(name)
    {
        Radius = r;
    }
    // Phương thức ghi đè tính diện tích hình tròn
    public override double Area()
    {
        return Math.PI * Radius * Radius;
    }

    // Phương thức ghi đè in thông tin hình tròn
    public override void Print()
    {
        Console.WriteLine("This is a {0}, area = {1}", Name, Area());
    }
}

// Lớp hình chữ nhật (rectangle) kế thừa lớp hình vẽ
public class Rectangle : Shape
{
    public double Width;
    public double Height;

    public Rectangle(string name = "", double w = 0, double h = 0) : base(name)
    {
        Width = w;
        Height = h;
    }

    // Phương thức ghi đè tính diện tích hình chữ nhật
    public override double Area()
    {
        return Width * Height;
    }

    // Phương thức ghi đè in thông tin hình chữ nhật
    public override void Print()
    {
        Console.WriteLine("This is a {0}, area = {1}", Name, Area());
    }

}
class Program
{
    public static void Main()
    {
        Shape s1= new Circle("Cirle",1);
        Shape s2 = new Rectangle("Rectangle", 3,7);
        s1.Print();
        s2.Print();
        Console.ReadLine();
    }
}