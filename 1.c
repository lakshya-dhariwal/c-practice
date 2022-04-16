#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
     int totalSecs;
    scanf("%d", &totalSecs);
    int days, hrs, mins, secs;
    days = totalSecs / (60*60*24);
    totalSecs = totalSecs % (60*60*24);
    hrs  = totalSecs / (60*60);
    totalSecs = totalSecs % (60*60);
    mins = totalSecs / 60;
    totalSecs = totalSecs % 60;
    secs = totalSecs;
    printf("The Duration is %d days %d hours %d minutes %d seconds", days, hrs, mins, secs);
    return 0;
    return 0;
}
