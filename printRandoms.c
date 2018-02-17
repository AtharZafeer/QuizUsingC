#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include"quiz.h"
 
// Generates and prints 'count' random numbers in
// range [lower, upper].
void printRandoms(int lower, int upper, int count)
{
    int i;
    for (i = 0; i < count; i++) {
        int num = (rand() + lower) % (upper + 1);
        printf("%d ", num);
    }
}
 
// Driver code
