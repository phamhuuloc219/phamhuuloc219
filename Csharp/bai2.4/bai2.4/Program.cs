using System;

class Point
{
    public double x, y;

    public Point(double x, double y)
    {
        this.x = x;
        this.y = y;
    }

    public void Move(double dx, double dy)
    {
        x += dx;
        y += dy;
    }
}

class Circle
{
    public double r;
    public Point c;

    public Circle(double r, Point c)
    {
        this.r = r;
        this.c = c;
    }

    public double Area()
    {
        return Math.PI * r * r;
    }

    public void Move(double dx, double dy)
    {
        c.Move(dx, dy);
    }
}

class Program
{
    static void Main()
    {
        Circle c1 = new Circle(3.0, new Point(0, 0));
        Circle c2 = new Circle(1.5, new Point(2, 2));

        Console.WriteLine("Dien tich hinh tron 1: " + c1.Area());
        Console.WriteLine("Dien tich hinh tron 2: " + c2.Area());

        c1.Move(1, 1);
        c2.Move(-0.5, -0.5);

        Console.WriteLine("Tam vong tron 1: (" + c1.c.x + ", " + c1.c.y + ")");
        Console.WriteLine("Tam vong tron 2: (" + c2.c.x + ", " + c2.c.y + ")");
        Console.ReadLine();
    }
}
