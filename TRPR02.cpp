#include <stdio.h>
#include <stdbool.h>


bool isPrime(int num) {
    if (num < 2)
        return false;

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }

    return true;
}


void findPrimesSum(int n) {
    if (n < 4) {
        printf("Não é possível decompor em dois números primos.\n");
        return;
    }

    int prime1 = 2, prime2 = n - 2;

    while (prime1 <= prime2) {
        if (isPrime(prime1) && isPrime(prime2)) {
            printf("A decomposição de %d como a soma de dois primos é: %d + %d\n", n, prime1, prime2);
            return;
        }

        prime1++;
        prime2--;
    }

    printf("Não é possível decompor em dois números primos.\n");
}

int main() {
    int num;

    printf("Digite um número inteiro maior que 2: ");
    scanf("%d", &num);

    findPrimesSum(num);

    return 0;
}

