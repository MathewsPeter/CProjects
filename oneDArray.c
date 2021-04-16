/*
 * oneDArray.c
 *
 *  Created on: 17 Apr 2021
 *      Author: mathewspeter
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int* arr;
    scanf("%d ",&n);
    arr = (int*)(malloc(sizeof(int)*n));
    for(int i=0;i<n;++i)
     scanf("%d",(arr+i));
     int sum = 0;
     for(int i=0;i<n;++i)
     sum+= *(arr+i);
     printf("%d",sum);
    return 0;
}
