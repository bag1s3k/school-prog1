namespace prog1;

using System;

class Program {
    static void Main(string[] args) {
        MyslimCislo(4);
        MyslimCislo(10);
        MyslimCislo();

        int a = vypis<int>(5);
        double b = vypis<double>(5.4);

        int x = soucet(4, 5);
        double y = soucet(1.2, 3.4, 5.8); // rozlisi podlep poctu parametru
    }

    static void MyslimCislo(int cislo = 0) {
        Console.WriteLine($"Myslim cislo: {cislo}");
    }

    static T vypis<T>(T a) {
        Console.WriteLine($"Vracím ti {a}");
        return a;
    }

    static int soucet(int a, int b) {
        return a + b;
    }

    static double soucet(double a, double b, double c) {
        return a + b + c;
    }
}