namespace prog1;

internal class Zlomek {
    public int citatel;
    public int jmenovatel;

    public Zlomek(int citatel, int b) {
        this.citatel = citatel;
        this.jmenovatel = (b == 0 ? 1 : b);
    }

    public static Zlomek operator *(Zlomek a, Zlomek b) {
        return new Zlomek(a.citatel * b.citatel, a.jmenovatel * b.jmenovatel);
    }

    public static Zlomek operator /(Zlomek a, Zlomek b) {
        // return new Zlomek(a.citatel * b.jmenovatel, a.jmenovatel * b.citatel);
        return a * new Zlomek(b.jmenovatel, b.citatel);
    }

    public static Zlomek operator -(Zlomek a) {
        return new Zlomek(-a.citatel, a.jmenovatel);
    }
    
    public static Zlomek operator +(Zlomek a, Zlomek b) {
        return new Zlomek(
            a.citatel * b.jmenovatel + b.citatel * a.jmenovatel,
            a.jmenovatel * b.jmenovatel
            );
    }

    public static Zlomek operator -(Zlomek a, Zlomek b) {
        return a + (-b);
    }

    public override string ToString() {
        return $"({citatel}/{jmenovatel})";
    }
}