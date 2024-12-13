import java.util.Scanner;

public class Main {

    static void inserimento(int sequenzaInserita[]){
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < sequenzaInserita.length; i++) {
            System.out.println("Inserisci il numero");
            sequenzaInserita[i] = sc.nextInt();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] array = {7, 2, 4, 1, 5};
        int[] sequenzaInserita = new int [5];
        boolean allarmismo = true;

        inserimento(sequenzaInserita);
        if(sequenzaInserita[0] == array[0] && sequenzaInserita[1] == array[1] && sequenzaInserita[2] == array[2] && sequenzaInserita[3] == array[3] && sequenzaInserita[4] == array[4]){
            System.out.println("La sequenza è corretta");
        } else {
            System.out.println("La sequenza è errata");
        }
    }
}
