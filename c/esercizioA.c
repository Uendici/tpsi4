/*
    Il processo padre inizializza tre variabili intere cateto1 e cateto2 di un triangolo rettangolo e assegna loro dei valori
    viene creato il processo figlio, il processo padre calcola e stampa l’area del triangolo mentre il processo figlio deve stampare il valore del perimetro 
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int cateto1 = 3;
    int cateto2 = 4;
    int ipotenusa = 5;
    int pid = fork();
    if (pid == 0) {
        printf("Perimetro (figlio): %d\n", cateto1 + cateto2 + ipotenusa);
    } else {
        printf("Area (padre): %d\n", (cateto1 * cateto2) / 2);
    }
    return 0;
}


