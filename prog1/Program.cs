namespace prog1;

using System;

class Program {
    static void Main(string[] args) {
        Zlomek zlomek1 = new Zlomek(10, 5);
        Zlomek zlomek2 = new Zlomek(6, 3);
        
        Console.WriteLine(zlomek1 * zlomek2);
    }
}