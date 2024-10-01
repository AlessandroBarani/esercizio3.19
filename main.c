#include <stdio.h>
int main() {
int l1, l2, l3;
    printf("Inserisci valore primo lato(l1): ");
    scanf("%d", &l1);
    printf("Inserisci valore secondo lato(l2): ");
    scanf("%d", &l2);
    printf("Inserisci valore terzo lato(l3): ");
    scanf("%d", &l3);
    if(l1<(l2+l3)&&l2<(l1+l3)&&l3<(l1+l2)) {
        if (l1 == l2 && l2 == l3) {
            printf("Il triangolo e' equilatero");
        }else if (l1 == l2 && l2 != l3){
            printf("Il triangolo e' isoscele");
        }else if (l2 == l3 && l1 != l2){
            printf("Il triangolo e' isoscele");
        }else if (l1 == l3 && l1 != l2){
            printf("Il triangolo e' isoscele");
        }else if (l1 != l2 && l2 != l3) {
            printf("Il triangolo e' scaleno");
        }
    }else {
        printf("Con queste misure non e' possibile costruire un triangolo");
    }
    return 0;
}
