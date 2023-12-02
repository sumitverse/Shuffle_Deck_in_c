#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DECK_SIZE 52

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void shuffleDeck(int deck[], int size) {
    for (int i = size - 1; i > 0; --i) {
        int j = rand() % (i + 1);
        swap(&deck[i], &deck[j]);
    }
}

void printDeck(int deck[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", deck[i]);
    }
    printf("\n");
}

int main() {
    srand(time(NULL));


    int deck[DECK_SIZE];
    for (int i = 0; i < DECK_SIZE; ++i) {
        deck[i] = i + 1;  
    }
    shuffleDeck(deck, DECK_SIZE);

    printf("Shuffled Deck: ");
    printDeck(deck, DECK_SIZE);

    return 0;
}
