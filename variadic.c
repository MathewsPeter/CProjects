#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000
int  sum (int count,...)
{
    int sum=0;
    va_list args;
    va_start(args,count);
    for(int i=0;i<count;++i)
        sum+=va_arg(args,int);
    return sum;
}

int min(int count,...)
{
    va_list args;
    va_start(args,count);
    int min=va_arg(args,int);
    for(int i=1;i<count;++i)
        {   int temp = va_arg(args,int);
            if(temp<min)
                min = temp;
        }
    return min;
}

int max(int count,...)
{
    va_list args;
    va_start(args,count);
    int max=va_arg(args,int);
    for(int i=1;i<count;++i)
        {int temp = va_arg(args,int);
        if(temp>max)
            max = temp;
        }
    return max;
}

int test_implementations_by_sending_three_elements() {
