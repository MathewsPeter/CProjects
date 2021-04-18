/*
 * birthday_cake.c
 *
 *  Created on: 18 Apr 2021
 *      Author: mathewspeter
 */


int birthdayCakeCandles(int candles_count, int* candles) {
    int i, max = candles[0] , count = 0;
for (i=0; i<candles_count; i++)
if (candles[i]>max)
max = candles[i];

for (i=0; i<candles_count; i++)
if (candles[i]== max)
count++;
return count;

}
