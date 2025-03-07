#include <stdio.h>
#include <stdlib.h>

    //write a c program that accepts a group of N domestic animals and a group of x wild animals. Your program should print (N+X) animals after entering each group.
    /*
    Group work by
    1) Aina Oluwatimilehin
    2) Kambere Elton Jesse
    3) Medhanie Eyob
    4) Niza
    */
#define MAX_ANIMALS 100
#define MAX_NAME_LENGTH 50

int main() {
    int N, X, i;
    char animals[MAX_ANIMALS][MAX_NAME_LENGTH];

    // Input number of domestic animals
    printf("Enter the number of domestic animals: ");
    scanf("%d", &N);

    // Input names of domestic animals
    printf("Enter the names of the domestic animals:\n");
    for (i = 0; i < N; i++) {
        printf("Domestic animal %d: ", i + 1);
        scanf("%s", animals[i]);
    }

    // Input number of wild animals
    printf("Enter the number of wild animals: ");
    scanf("%d", &X);

    // Input names of wild animals
    printf("Enter the names of the wild animals:\n");
    for (i = N; i < N + X; i++) {
        printf("Wild animal %d: ", i - N + 1);
        scanf("%s", animals[i]);
    }

    // Print all animals
    printf("\nList of all animals:\n");
    for (i = 0; i < N + X; i++) {
        printf("%s\n", animals[i]);
    }

    return 0;
}
