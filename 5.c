#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    float tractLand , acre;
    scanf("%f", &tractLand);
    acre = tractLand / 43560;
    printf("%.2f sq.ft is equal to %.2f acres", tractLand, acre);
    return 0;
}
