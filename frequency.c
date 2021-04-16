#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char n[1000];
    scanf("%s",n);
    int f[10] = {0};
    printf("%s\n",n);
    char c;
    int i;
    for( i =0; i<1000; ++i)
      {   c = n[i];
      printf("%c ",c);
         if(c=='0') f[0]++;
         if(c=='1') f[1]++;
         if(c=='2') f[2]++;
         if(c=='3') f[3]++;
         if(c=='4') f[4]++;
         if(c=='5') f[5]++;
         if(c=='6') f[6]++;
         if(c=='7') f[7]++;
         if(c=='8') f[8]++;
         if(c=='9') f[9]++;
         if(c=='\0') break;
       }
    printf("\n");
    for(i=0;i<=9; ++i)
         printf("%d ",f[i]);


    return 0;
}
