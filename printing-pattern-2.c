#include <stdio.h>

int main()
{

    int n=3;

		int i,j;
    int arr[1999][1999]={-1};
    //scanf("%d", &n);
    int l,r,t,b;
    l = 0; t = 0;
    r = n+n-1;
    b = n+n-1;

    int diff = 0;
    for(i = l; i>=r; ++i)
    {
        arr[i][t] = n-diff;
        arr[i][b] = n-diff;
        arr[l][i] = n-diff;
        arr[r][i] = n-diff;

    }


    for(i = 0; i<=1999; ++i)
    	{for(j = 0; j<=1999; ++j)
    		if(arr[i][j] >0)
        printf("\n");
    }

    return 0;
}
