// Space Exploration
// part1_galaxy.c
//
// This program was written by YOUR-NAME-HERE (zXXXXXXX)
// on INSERT-DATE-HERE
//
// This program is a simple game that allows the user to build a galaxy. 
// The user can place stars, planets, and nebulae in the galaxy.

#include <stdio.h>

#define SIZE 5
#define NEBULA_POINTS -10

enum entity {
    STAR,
    PLANET,
    NEBULA,
    SPACESHIP,
    EMPTY,
};

struct celestial_body {
    enum entity entity;
    int points;
};

void print_map(struct celestial_body galaxy[SIZE][SIZE]);

int main(void) {
    // firstly what is the structure of galaxy??
    struct celestial_body galaxy[SIZE][SIZE];

    // TODO: Initialize the galaxy
    initialize_galaxy(galaxy);

    // TODO: Place the planets and nebulae in the galaxy

    planets_nebulae(galaxy);

    // TODO: Place the player in the galaxy
    printf("Enter the starting position of the player: ");
    scanf("%d %d", &row, &col);
    while (row < 0 || SIZE <= row || col < 0 || SIZE <= col ||
    galaxy[row][col].entity != EMPTY) {
        printf("Invalid starting position!\n");
        printf("Re-enter starting position: ");
        scanf("%d %d", &row, &col);
    }

    galaxy[row][col].entity = SPACESHIP;

    // TODO: Place the stars in the galaxy
    printf("Enter the position and points of the star(s):\n");
    while (scanf("%d %d %d", &row, &col, &points) == 3) {
        galaxy[row][col].entity = STAR;
        galaxy[row][col].points = points;
    }

    // TODO: Print the map
    print_map(galaxy);

    return 0;
}

void initialize_galaxy(struct celestial_body galaxy[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            galaxy[i][j].entity = EMPTY;
            galaxy[i][j].points = 0;
        }
    }
}

void planets_nebulae(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("Enter planets and nebulae:\n");
    char command;
    scanf(" %c", &command);

    int row;
    int col;
    int points;
    while (command != 'q') {
        if (command == 'p') {
            scanf("%d %d %d", &row, &col, &points);
            galaxy[row][col].entity = PLANET;
            galaxy[row][col].points = points;
        } else if (command == 'n') {
            scanf("%d %d", &row, &col);
            galaxy[row][col].entity = NEBULA;
        }
        scanf(" %c", &command);
    }
}

// Function prints the map of the galaxy
// 
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void print_map(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("\n---------------------\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("|");
            if (galaxy[i][j].entity == SPACESHIP) {
                printf(" X ");
            } else if (galaxy[i][j].entity == EMPTY) {
                printf("   ");
            } else if (galaxy[i][j].entity == STAR) {
                printf(" * ");
            } else if (galaxy[i][j].entity == PLANET) {
                printf(" o ");
            } else if (galaxy[i][j].entity == NEBULA) {
                printf(" # ");
            }
        }
        printf("|\n");
        printf("---------------------\n");
    }
}