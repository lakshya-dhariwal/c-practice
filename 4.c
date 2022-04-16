#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    float m, n;
    int minNoOfTiles;
    scanf("%f %f", &m, &n);
    minNoOfTiles = ceil((m/2) * (n/1));
    printf("%d", minNoOfTiles);
    return 0;
}
