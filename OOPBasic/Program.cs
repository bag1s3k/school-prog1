namespace OOPBasic;

using System;

class Program {
    static void Main(string[] args) {
        CLovek clovek = new CLovek("Karel", 200, 100, 20);
        
        Console.WriteLine(clovek.getJmeno());
        clovek.setJmeno("Maty");
        Console.WriteLine(clovek.getJmeno());
        Console.WriteLine(clovek.vaha);
    }
}