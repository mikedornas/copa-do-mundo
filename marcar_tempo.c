#include<stdio.h>
#include<stdlib.h>


// Marcar tempo costuma ser um pouco diferente em Windows e Linux. Embaixo eu usei diretivas de compilacao -
// os #ifdef, #else e #endif. Eles verificam se voce esta tentando compilar em Windows ou nao. Se for em
// Windows, o compilador vai considerar so o codigo dentro do #ifdef _WIN32 e ignorar o codigo no #else.
// Se nao for Windows, o compilador vai ignorar o codigo dentro de #ifdef _WIN32 e usar somente o codigo
// dentro do #else
#ifdef _WIN32
#include <time.h>
#else
#include <sys/times.h>
#include <sys/unistd.h>
#endif

// A mesma ideia do Windows / Linux vale aqui, esta funcao retorna o tempo gasto desde o inicio do programa em segundos.
float getTime() {
#ifdef _WIN32
    clock_t start = clock();
    return (float)start / CLOCKS_PER_SEC;
#else
    struct tms tempo;
    clock_t tempotic;
    float cpt = sysconf(_SC_CLK_TCK);
    times(&tempo);
    tempotic = tempo.tms_utime ;
    return ( (float) (tempotic/cpt) );
#endif
}


int main() {
    int i;
    // O tempo eh calculado como a subtracao de dois tempos
    int K = 10000000;
    float s = getTime();
    int* vec = (int*) malloc (K * sizeof(int));
    for (i = 0; i < K; i++) {
        vec[i] = i;
    }
    free(vec);
    printf("\nTempo gasto em segundos para inserir %d numeros no vetor: %.5fs\n\n", K, getTime() - s);
    return 0;
}
