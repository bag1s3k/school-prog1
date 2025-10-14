namespace prog1;

using System;

class Program {
    static void Main(string[] args) {
        for (int i = 0; i < 10; i++) {
            HelloWorld("Console.WriteLine");
        }
    }

    static void HelloWorld(string str) {
        Console.WriteLine(str);
    }
}