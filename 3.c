#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    float distance;
    scanf("%f",&distance);
    
    float distance_m, distance_ft, distance_in, distance_cm;
    distance_m = distance * 1000;
    distance_ft = distance * 3280.84;
    distance_in = distance * 39370.1;
    distance_cm = distance * 100000;
    
    printf("%.2f m\n%.2f ft\n%.2f in\n%.2f cm", distance_m, distance_ft, distance_in, distance_cm);
    return 0;
}
