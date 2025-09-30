namespace OOPBasic;

public class Zviratko {
    private string jmeno;
    protected int vek; // jako private, ale třídy, které dědí tak vidí

    public Zviratko(string jmeno, int vek) {
        this.jmeno = jmeno;
        this.vek = vek;
    }
}