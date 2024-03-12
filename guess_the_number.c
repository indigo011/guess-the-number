#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define RANGE 10

int main() {
    srand(time(NULL));
    int sorted_num = rand() % RANGE;

    while(true) {
        int guess;

        printf("Guess the sorted number from 1 to %d: ", RANGE);
        while(!scanf("%d",&guess)) {
            printf("That's not a number, dumbass. Try it again: ");
            getchar();
        }

        if (guess == sorted_num) {
            printf("CONGRATS! You've guessed the number.");
            break;
        } else
            printf("WRONG!\n");
    }

    system("pause");
    return 0;      
}