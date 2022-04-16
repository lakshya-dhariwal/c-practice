#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int amtGiven, billAmt;
    scanf("%d", &amtGiven);
    scanf("%d", &billAmt);
    
    int quotient, remainder;
    quotient = amtGiven / billAmt;
    remainder = amtGiven % billAmt;
    
    printf("Quotient:%d\nRemainder:%d", quotient, remainder);
    return 0;
}
