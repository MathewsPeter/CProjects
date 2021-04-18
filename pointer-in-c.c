/*
 * pointer-in-c.c
 *
 *  Created on: 13 Apr 2021
 *      Author: mathewspeter
 */


#include <stdio.h>

void update(int *a,int *b)
{
    int s = *a  + *b;

    int d = *a  - *b;


    if(d<0)
        d*=-1;

    *a = s;
    *b = d;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;


    scanf("%d %d", &a, &b);
    update(pa, pb);

    printf("%d\n%d", a, b);

    return 0;
}
