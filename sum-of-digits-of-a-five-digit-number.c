/*
 * sum-of-digits-of-a-five-digit-number.c
 *
 *  Created on: 13 Apr 2021
 *      Author: mathewspeter
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int s = 0;

    for(int i = 0; i< 5; ++i)
    {
        s+=n%10;
        n/=10;
    }

    printf("%d",s);
    return 0;
}
