/*
 * oneDArray.c
 *
 *  Created on: 17 Apr 2021
 *      Author: mathewspeter
 */




int main() {

    int n;int* arr;
    scanf("%d ",&n);
    arr = (int*)(malloc(sizeof(int)*n));

    for(int i=0;i<n;++i)

     scanf("%d", (arr+i));

     int sum = 0;
     for(int i=0;i<n;++i)

     sum+= *(arr+i);
     printf("%d",sum);

    return 0;
}
