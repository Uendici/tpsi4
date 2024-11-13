package conto;

public class conti {
    public static void main ( String[] args){
        Secondaria secondaria = new Secondaria();

        int risultatosomma = secondaria.somma(5,10);
        System.out.println("somma = "+ risultatosomma);
        int risultatomoltiplicazione = secondaria.prodotto(1, 1, 2);
        System.out.println("prodotto = "+ risultatomoltiplicazione);
    }
}
