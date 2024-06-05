﻿
﻿using System;

class Program
{
    static void Main(string[] args)
    {
        uint number;
        uint reversedNumber = 0;

        // Nhập số nguyên từ người dùng
        Console.Write("Nhập số nguyên không dấu: ");
        uint.TryParse(Console.ReadLine(), out number);

        // Đảo ngược các chữ số
        while (number > 0)
        {
            reversedNumber = reversedNumber * 10 + (number % 10);
            number /= 10;
        }

        // In kết quả
        Console.WriteLine("Số đảo ngược là: " + reversedNumber);
    }
}
