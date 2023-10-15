#include<stdio.h>
#include<math.h>

#define PI 3.14159265

void main() {
    float angle1 = 30.0, angle2 = 45.0; // angles of elevation in degrees
    float height = 100.0; // height of the lighthouse
    float distance1, distance2, distance_between_ships;

    // Convert angles from degrees to radians
    angle1 *= PI / 180.0;
    angle2 *= PI / 180.0;

    // Calculate distances of ships from lighthouse using tan(angle) = height / distance
    distance1 = height / tan(angle1);
    distance2 = height / tan(angle2);

    // Calculate distance between ships
    distance_between_ships = fabs(distance1 - distance2);

    printf("The distance between the two ships is: %.2f meters\n", distance_between_ships);
}
