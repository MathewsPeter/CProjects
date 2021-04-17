#include <stdio.h>
/*
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4 */
int main()
{

    int n=4,i,j,k;
    //scanf("%d", &n);
    int i,j,k;
    for(i = n; i>=1; --i)
    {
	for(j=n;j>=i; --j)	printf("%d ",j);
	for(k=1;k<i; ++k)	printf("%d ",i);
	for(k=1;k<i; ++k)	printf("%d ",i);
	for(j=i+1;j<=n; ++j)	printf("%d ",j);
	printf("\n");
    }

    for(i = 2; i<=n; ++i)
	{
	for(j=n;j>=i; --j)	printf("%d ",j);
	for(k=1;k<i; ++k)	printf("%d ",i);
	for(k=1;k<i; ++k)	printf("%d ",i);
	for(j=i+1;j<=n; ++j)	printf("%d ",j);
	printf("\n");
	}
    return 0;
}
