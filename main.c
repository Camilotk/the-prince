#include <stdio.h>
#include <stdlib.h>

#include "src/game.h"

int main(void) {
    // Players and strings init
    Player SomePlayer[6];
    char reader[255], name[25];

    // Seed
    srand(time(NULL));

    printf("\033[33m  _____ _           ______     _ \033[0m \n");
    printf("\033[33m |_   _| |          | ___ \\   (_) \033[0m \n");
    printf("\033[33m   | | | |__   ___  | |_/ / __ _ _ __   ___ ___  \033[0m"); 
    printf("     \033[33m _.\033[0m\033[96m+\033[33m._\033[0m\n");
    printf("\033[33m   | | | '_ \\ / _ \\ |  __/ '__| | '_ \\ / __/ _ \\ \033[0m");
    printf("    \033[33m(\033[0m\033[38;5;196m^\033[0m\033[33m\\/\033[0m");
    printf("\033[38;5;196m^\033[0m\033[33m\\/\033[0m\033[38;5;196m^\033[0m\033[33m)\033[0m\n");
    printf("\033[33m   | | | | | |  __/ | |  | |  | | | | | (_|  __/ \033[0m");
    printf("     \033[33m\\\033[0m\033[38;5;28m@\033[0m\033[38;5;124m*\033[0m");
    printf("\033[38;5;28m@\033[0m\033[38;5;124m*\033[0m\033[38;5;28m@\033[0m\033[33m/\033[0m\n");
    printf("\033[33m   \\_/ |_| |_|\\___| \\_|  |_|  |_|_| |_|\\___\\___| \033[0m");
    printf("   \033[33m  {_____}\033[0m\n");
    printf("\n");

    // Instructions?
    printf("Do you want to read the instructions? (Y/N) ");
    fgets(reader, 254, stdin);
    if (reader[0] == 'y' || reader[0] == 'Y') {
        printf("Print instructions\n");
    }

    printf("Start the game!\n");

}
