/*
 * playing-with-characters.c
 *
 *  Created on: 13 Apr 2021
 *      Author: mathewspeter
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char c;
    char s[100];
    char l[100];
    scanf("%c",&c);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]*c", l);
    printf("%c\n",c);
    printf("%s\n",s);
    printf("%s\n",l);
    return 0;
}
