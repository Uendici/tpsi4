/*
    Il processo padre sta in ascolto di un comando da tastiera (scanf) in base al comando ricevuto crea ed avvia un processo figlio,
    prima di avviare il processo figlio la variabile led viene impostata con il valore 1,2 o 3 (1=lampeggio led verde, 2 rosso e 3 giallo) 
    il processo figlio leggendo il valore della variabile led farà lampeggiare il led corrispondente
    comando ‘v’ -> 10 lampeggi del led verde ad intervalli di 0.3 sec
    comando ‘r’ -> 10 lampeggi del led rosso ad intervalli di 0.7 sec 
    comando ‘g’ -> 10 lampeggi del led giallo ad intervalli di 1.2 sec 
    comando ‘q’ -> chiusura del programma
    Oltre a comandare il pin fisico visualizzare un messaggio a schermo (es. led verde acceso, led verde spento, …) . Documentare il lavoro svolto.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define N 10
int main(){
    int led_verde = 1;
    int led_rosso = 2;
    int led_giallo = 3;
    char scelta;
    while(scelta != 'q'|| scelta != 'Q'){
        printf("scegli cosa vuoi inserire    comando ‘v’ -> 10 lampeggi del led verde ad intervalli di 0.3 sec\ncomando ‘r’ -> 10 lampeggi del led rosso ad intervalli di 0.7 sec\ncomando ‘g’ -> 10 lampeggi del led giallo ad intervalli di 1.2 sec \ncomando ‘q’ -> chiusura del programma\n");
        scanf("%c",&scelta);
        int pid = fork();
        if(pid == 0){
            if(scelta == 'v'|| scelta == 'V'){
                for(int i = 0; i < N; i++){
                    printf("led verde: acceso\n");
                    sleep(0.3);
                    printf("led verde: spento\n");
                }
            }
            else if(scelta == 'r'|| scelta == 'R'){
                for(int i = 0; i < N; i++){
                    printf("led rosso: acceso\n");
                    sleep(0.7);
                    printf("led rosso: spento\n");
                }
            }
            else if(scelta == 'g'|| scelta == 'G'){
                for(int i = 0; i < N; i++){
                    printf("led giallo: acceso\n");
                    sleep(1.2);
                    printf("led giallo: spento\n");
                }
            }
        }
    }
    return 0;
}