#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define RANGE 10

int main() {
    
    while (true) {
        srand(time(NULL));
        int sorted_num = rand() % RANGE;

        while(true) {
            int guess;

            //system("color 60");
            printf("Guess the sorted number from 1 to %d: ", RANGE);

            while(!scanf("%d",&guess)) {
                // system("color 64");
                printf("That's not a number, dumbass. Try it again: "); //okay
                getchar();
            }

            
            if (guess == sorted_num) {
                // system("color 6f");
                system("cls");
                printf("CONGRATS! You've guessed the number.\n\n");
                break;
            } else {
                // system("color 64");
                printf("WRONG!\n");
            }
        }

        int option;
        while (true) {
            // system("color 60");
            printf("\t(0) Play again\n\t(1) Exit\n\tOption: ");
            int dummy = scanf("%d", &option);
            //!scanf("%d", &option) || (option != 0 && option != 1);
            
            if ((option == 1 || !option) && dummy)
                break;

            // system("color 60");
            getchar();
            printf("\nThat's not an option.\n\n");
        }

        if (option) {
            printf("\nExiting program...\n");
            break;
        } else
            system("cls");  
    }

    system("pause");
    return 0;      
}