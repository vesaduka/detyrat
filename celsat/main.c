#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int n_hedhje;
    bool gjendja_x1 = false;
    bool gjendja_x2 = false;
    bool gjendja_x3 = false;
    int piket = 0;
    int goditje_x2 = 0;

    printf("Vendos numrin e hedhjeve: ");
    scanf("%d", &n_hedhje);

    for (int i = 0; i < n_hedhje; i++) {
        char porta;

        if (i % 2 == 0) {
            porta = 'A';
        } else {
            porta = 'B';
        }

        if (porta == 'A') {
            gjendja_x1 = !gjendja_x1;
            if (gjendja_x1) {
                if (gjendja_x2) {
                    piket++;
                    gjendja_x2 = false;
                    goditje_x2 = 0;
                } else if (goditje_x2 == 1) {
                    goditje_x2++;
                } else {
                    goditje_x2 = 1;
                }
            }
        } else if (porta == 'B') {
            gjendja_x3 = !gjendja_x3;
            if (gjendja_x3) {
                if (gjendja_x2) {
                    piket++;
                    gjendja_x2 = false;
                    goditje_x2 = 0;
                } else if (goditje_x2 == 1) {
                    goditje_x2++;
                } else {
                    goditje_x2 = 1;
                }
            }
        }

        if (goditje_x2 == 2) {
            gjendja_x2 = true;
            goditje_x2 = 0;
        }

        printf("Hedhja %d ne porten %c. Piket: %d\n", i + 1, porta, piket);
    }

    printf("Piket tuaja jane: %d ", piket);

    return 0;
}
