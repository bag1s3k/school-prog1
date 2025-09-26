namespace OOPBasic;

using System;

public class CLovek {
    private string jmeno;
    private int vyska;
    
    public int vaha { private set; get; } // zvenku nelze nastavit, ale číst ano
    
    public int pocetPrstu;
    
    public CLovek(string jmeno, int vyska, int vaha, int pocetPrstu) {
        this.vyska = vyska;
        this.vaha = vaha;
        this.pocetPrstu = pocetPrstu;

        if (jmeno.Length < 3) {
            Console.Error.WriteLine("Prilis kratke jemno");
            Environment.Exit(1);
        }
        else
            this.jmeno = jmeno;
    }

    public string getJmeno() { return jmeno; }

    public void setJmeno(string jmeno) { this.jmeno = jmeno; }
}