namespace OOPBasic;

using System;

class Program {
    static void Main(string[] args) {
        MyslimCislo(4);
        MyslimCislo(10);
        MyslimCislo();

        int a = vypis<int>(5);
        double b = vypis<double>(5.4);
    }

    static void MyslimCislo(int cislo = 0) {
        Console.WriteLine($"Myslim cislo: {cislo}");
    }

    static T vypis<T>(T a) {
        Console.WriteLine($"Vracím ti {a}");
        return a;
    }
}