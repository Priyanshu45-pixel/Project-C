#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int obstacle;
    char choice;

    srand(time(NULL));

    printf("Simple Running Game\n");
    printf("Press 'j' to jump when obstacle comes!\n\n");

    while (1) {
        obstacle = rand() % 2;   // 0 = no obstacle, 1 = obstacle

        if (obstacle == 1) {
            printf("Obstacle ahead! Jump? (j/n): ");
            scanf(" %c", &choice);

            if (choice == 'j' || choice == 'J') {
                printf("You jumped safely!\n\n");
            } else {
                printf("You hit the obstacle! Game Over.\n");
                break;
            }
        } else {
            printf("Running safely... (no obstacle)\n");
        }

        printf("---------------------------\n");
    }

    return 0;
}

