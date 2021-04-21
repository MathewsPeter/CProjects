/*
 * conditional_3rddayofcode.c
 *
 *  Created on: 22 Apr 2021
 *      Author: mathewspeter
 */



if(data%2) printf("Weird");
else
{
    if(data>=2 && data<=5)  printf("Not Weird");
    if(data>=6 && data<=20) printf("Weird");

    if(data>20) printf("Not Weird");
}
