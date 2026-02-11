/*-------------------------------------
This program will keep track of rides in a certain amusement park in Orlando.
-------------------------------------*/

#include <stdio.h>
#include <string.h>

#define MAX_RIDES 30
#define MAX_NAME 30

int main(){
    int amount;
    char name[MAX_RIDES][MAX_NAME]; // Array for names

    printf("\n");
    printf("Please enter the amount of rides: "); // Prompts the user for input
    scanf("%d", &amount);
    printf("\n");

    getchar();

    // Accepts input
    for(int i = 0; i < amount; i++) {
        printf("Enter ride %d's name: ", i + 1); // Prompts the user for input
        fgets(name[i], MAX_NAME, stdin); // Receives the input from the user

        name[i][strcspn(name[i], "\n")] = '\0'; // Stops at the newline
    }

    printf("\n");

    // Prints rides
    printf("List of rides: \n");
    for(int i = 0; i < amount; i++) {
        printf("%d: %s\n", i + 1, name[i]); // Prints the number, and the string
    }
    printf("\n");

    return 0;
}