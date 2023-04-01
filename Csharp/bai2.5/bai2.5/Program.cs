using System;

public class Stack
{
    private int top;
    private int Max;
    private int[] stack;

    public Stack(int Max)
    {
        this.top = -1;
        this.Max = Max;
        this.stack = new int[Max];
    }

    public void Push(int data)
    {
        if (top == Max - 1)
        {
            Console.WriteLine("Stack overflow");
            return;
        }
        top++;
        stack[top] = data;
    }

    public int Pop()
    {
        if (top == -1)
        {
            Console.WriteLine("Stack underflow");
            return -1;
        }
        int data = stack[top];
        top--;
        return data;
    }

    public int Peek()
    {
        if (top == -1)
        {
            return -1;
        }
        return stack[top];
    }

    public bool IsEmpty()
    {
        return top == -1;
    }

    public void Print()
    {
        if (top == -1)
        {
            Console.WriteLine("Stack is empty");
            return;
        }
        for (int i = top; i >= 0; i--)
        {
            Console.Write(stack[i] + " ");
        }
        Console.WriteLine();
    }
}

public static Stack PrimeFactors(int n)
{
    Stack factors = new Stack(n);
    int d = 2;
    while (d * d <= n)
    {
        while (n % d == 0)
        {
            factors.Push(d);
            n /= d;
        }
        d++;
    }
    if (n > 1)
    {
        factors.Push(n);
    }
    return factors;
}

public static void ReversePrintFactors(int n)
{
    Stack factors = PrimeFactors(n);
    if (factors.IsEmpty())
    {
        Console.WriteLine("No prime factors");
    }
    else
    {
        Console.Write(n + " = ");
        while (!factors.IsEmpty())
        {
            int factor = factors.Pop();
            Console.Write(factor);
            if (!factors.IsEmpty())
            {
                Console.Write(" * ");
            }
        }
        Console.WriteLine();
    }
}

public static string ToBinary(int n)
{
    if (n == 0)
    {
        return "0b0";
    }
    Stack binary = new Stack(32); // assume 32-bit binary
    while (n > 0)
    {
        binary.Push(n % 2);
        n /= 2;
    }
    string result = "0b";
    while (!binary.IsEmpty())
    {
        result += binary.Pop().ToString();
    }
    return result;
}

public static string ToHexadecimal(int n)
{
    if (n == 0)
    {
        return "0x0";
    }
    Stack hexadecimal = new Stack(8); // assume 8-digit hexadecimal
    while (n > 0)
    {
        int digit = n % 16;
        if (digit < 10)
        {
            hexadecimal.Push(digit.ToString());
        }
        else
        {
            hexadecimal.Push(((char)('A' + digit - 10)).ToString());
        }
        n /= 16;
    }
    string result = "0x";
    while (!hexadecimal.IsEmpty())
    {
        result += hexadecimal.Pop();
    }
    return result;
}
static void Main(string[] args)
{
    int n = 12;

    // Phân tích số nguyên thành thừa số nguyên tố và in ngược lại
    ReversePrintFactors(n);

    // Chuyển đổi số nguyên sang hệ nhị phân và thập lục phân
    Console.WriteLine(n + " in binary: " + ToBinary(n));
    Console.WriteLine(n + " in hexadecimal: " + ToHexadecimal(n));
}