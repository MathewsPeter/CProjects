#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n)
{
	int a,b,c;
    int i,j;
    float* arealist = (float*)(malloc(n*sizeof(float)));
    for(i =0;i<n;++i)
    {
        a = tr[i].a;
        b = tr[i].b;
        c = tr[i].c;
        float p = (a+b+c)/2.0f;
        float area = sqrt(p*(p-a)*(p-b)*(p-c));
        *(arealist+i) = area;
    }
    for (i = 0; i < n-1; i++)
           for (j = 0; j < n-i-1; j++)
            if(arealist[j]>arealist[j+1])
                {
                    float temp = arealist[j+1];
                    arealist[j+1] = arealist[j];
                    arealist[j] = temp;

                    struct triangle trtemp = tr[j+1];
                    tr[j+1] = tr[j];
                    tr[j] = trtemp;
                }


    /**
	* Sort an array a of the length n
	*/
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);

	}

	sort_by_area(tr, n);

	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}/*
 * small-large-triangle.c
 *
 *  Created on: 18 Apr 2021
 *      Author: mathewspeter
 */


