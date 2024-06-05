﻿using System;

class Program
{
    static void Main(string[] args)
    {
        // Khai báo biến
        sbyte[] numbers;
        int sumEven = 0;

        // Nhập dãy số từ người dùng
        Console.Write("Nhập số phần tử của dãy số: ");
        int n = int.Parse(Console.ReadLine());
        numbers = new sbyte[n];

        Console.WriteLine("Nhập dãy số:");
        for (int i = 0; i < n; i++)
        {
            numbers[i] = sbyte.Parse(Console.ReadLine());
        }

        // Tính tổng các số chẵn
        foreach (sbyte num in numbers)
        {
            if (num % 2 == 0)
            {
                sumEven += num;
            }
        }

        // In kết quả
        Console.WriteLine($"Tổng các số chẵn trong dãy số là: {sumEven}");
    }
}