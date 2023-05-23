#include <stdio.h>
#include <omp.h>

int main() {
    int N = 22;
    int bilangan[N];
    int total = 0;

    for (int i=0; i<N; i++) {
        bilangan[i] = i+1;
    }
    #pragma omp parallel for reduction(+:total)
    for (int i=0; i<N; i++) {
        total += bilangan[i];
    }
    printf("Hasilnya adalah: %d\n", total);
    return 0;
}