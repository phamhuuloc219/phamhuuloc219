using System.Collections.Generic;
using System;
class Point
{
    private double x;
    private double y;

    public Point(double x, double y)
    {
        this.x = x;
        this.y = y;
    }

    public double GetX()
    {
        return x;
    }

    public double GetY()
    {
        return y;
    }

    public void SetX(double x)
    {
        this.x = x;
    }

    public void SetY(double y)
    {
        this.y = y;
    }

    public void Move(double dx, double dy)
    {
        x += dx;
        y += dy;
    }

    public double Distance(Point other)
    {
        double dx = x - other.GetX();
        double dy = y - other.GetY();
        return Math.Sqrt(dx * dx + dy * dy);
    }
}


class MainClass
{
    public static void Main()
    {
        List<Point> points = new List<Point>();

        points.Add(new Point(0, 0));
        points.Add(new Point(3, 4));
        points.Add(new Point(-2, 1));
        points.Add(new Point(5, -3));

        foreach (Point p in points)
        {
            Console.WriteLine("(" + p.GetX() + ", " + p.GetY() + ")");
        }

        // Tìm điểm cách xa gốc tọa độ nhất
        Point farthest = points[0];
        double farthestDistance = farthest.Distance(new Point(0, 0));
        for (int i = 1; i < points.Count; i++)
        {
            Point p = points[i];
            double distance = p.Distance(new Point(0, 0));
            if (distance > farthestDistance)
            {
                farthest = p;
                farthestDistance = distance;
            }
        }
        Console.WriteLine("Diem xa goc toa do nhat: (" + farthest.GetX() + ", " + farthest.GetY() + ")");

        // tìm cặp điểm gần nhau nhất
        Point closest1 = points[0];
        Point closest2 = points[1];
        double closestDistance = closest1.Distance(closest2);
        for (int i = 0; i < points.Count - 1; i++)
        {
            Point p1 = points[i];
            for (int j = i + 1; j < points.Count; j++)
            {
                Point p2 = points[j];
                double distance = p1.Distance(p2);
                if (distance < closestDistance)
                {
                    closest1 = p1;
                    closest2 = p2;
                    closestDistance = distance;
                }
            }
        }
        Console.WriteLine("Cap diem gan nhau nhat: (" + closest1.GetX() + ", " + closest1.GetY() + ") and (" + closest2.GetX() + ", " + closest2.GetY() + ")");
        Console.ReadLine();
    }
}