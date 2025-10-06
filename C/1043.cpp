#include <stdio.h>
#define MINUTOS 60
#define DIA (24*60)

int main() {
    int hi, mi, hf, mf;
    int mit, mft, duracao;

    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    mit = hi * MINUTOS + mi;
    mft = hf * MINUTOS + mf;

    duracao = mft - mit;
    if (duracao <= 0) { 
        duracao += DIA; 
    }

    int ht = duracao / 60;
    int mt = duracao % 60;

    printf("Duracao %d Horas %d Minutos\n", ht, mt);

    return 0;
}
