// part1_variables
//
// This program was written by YOUR-NAME (ZID),
// on [DATE]
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.14 

int main(void) {
    // 1. Declare the variables
    // <data_type> <variable_name>
    double radius;
        
    // 2. Initalise the variables
    scanf("%lf", &radius);
   
    // 3. Calculate the area of the circle
    double area = PI * radius * radius;

    // 4. Print the result
    printf("The area is %lf\n", area);

    return 0;
}
