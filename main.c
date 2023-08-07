#include <stdio.h>
#include <stdlib.h>

#include "src/game.h"

int main(void) {
    // Players and strings init
    Player SomePlayer[6];
    char reader[255], name[25];

    // Seed
    srand(time(NULL));

    printf("T");
    printf("h");
    printf("e");
    printf(" ");
    printf("P");
    printf("r");
    printf("i");
    printf("n");
    printf("c");
    printf("e");
    printf("\n");

    // Instructions?
    printf("Do you want to read the instructions? (Y/N) ");
    fgets(reader, 254, stdin);
    if (reader[0] == 'y' || reader[0] == 'Y') {
        printf("Print instructions\n");
    }

    printf("Start the game!\n");

}
