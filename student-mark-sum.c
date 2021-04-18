/*
 * student-mark-sum.c
 *
 *  Created on: 17 Apr 2021
 *      Author: mathewspeter
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int marks_summation(int* marks, int number_of_students, char gender)
{

  int offs=0;
  if(gender=='g')
        offs++;

   int sum=0;
   for(int i=0+offs; i<number_of_students; i+=2)
        sum+=marks[i];
   return sum;

}

