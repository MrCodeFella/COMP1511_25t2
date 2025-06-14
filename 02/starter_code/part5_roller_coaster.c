// part5_roller_coaster
//
// This program was written by Conrad Vernon, z5478184
// on 11/06/2025
//
// This program:
// 1. Scans in the users height.
//
// 2. If the height is 0 or less, 
//    it should print an error message
//
// 3. If the height is below the minimum height, 
//    it should print a message telling the user they are not tall enough to ride
// 
// 4. If the height is above the minimum but below the ride alone threshold,
//    it should print a message telling the user they can ride with an adult
//
// 5. If the height is or is above the ride alone threshold, 
//    it should print a message telling the user they can ride.

#include <stdio.h>

#define INVALID_HEIGHT 0
#define MINIMUM_HEIGHT 100
#define MIN_HEIGHT_TO_RIDE_ALONE 160

int main(void) {
    double height;
    scanf("%lf", &height);

    if (height <= INVALID_HEIGHT) {
        printf("Error: invalid height\n");
    } else if (height < MINIMUM_HEIGHT) {
        printf("Below minimum height\n");
    } else if (height < MIN_HEIGHT_TO_RIDE_ALONE) {
        printf("You must ride with an adult\n")
    } else {
        printf("You may ride alone\n");
    }

    return 0;
}
