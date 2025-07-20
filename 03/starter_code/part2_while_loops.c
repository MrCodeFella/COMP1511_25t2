// part2_2d_while_loops.c
//
// This program was writtn by Sofia De Bellis (z5418801)
// on Febuarary 2024
//
// This program is a simple deonstration of a 2D while loop 

#include <stdio.h>

#define MAX_ROW 5
#define MAX_COL 5

int main(void) {
    int rows = 0;
    int cols = 0;
    printf("Start of outer loop\n");
    while (rows < MAX_ROW) {
        int cols = 0;
        printf("Start of inner loop\n");
        while (cols < MAX_COL) {
            printf("%d %d\n", rows, cols);
            cols++;
        }
        printf("End of inner loop\n");
        rows++;
    }
    printf("End of outer loop\n");
 
    return 0;
}

