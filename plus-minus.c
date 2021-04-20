/*
 * plus-minus.c
 *
 *  Created on: 20 Apr 2021
 *      Author: mathewspeter
 */


     int pc=0,nc=0,zc=0; float tot = arr_count;
     int temp ; int i =0;
    for(int i =0;i<arr_count; ++i)
    {
        temp = arr[i];
        if(temp>0)      pc++;
        else if(temp<0) nc++;
        else            zc++;
    }
    printf("%.6f\n%.6f\n%.6f\n",pc/tot,nc/tot,zc/tot);
