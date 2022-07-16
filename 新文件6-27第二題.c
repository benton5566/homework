#include <stdio.h>


int main()
{
    int n,m;
    for(n=1;n<=9;n++){
    	for(m=1;m<=9;m++)
    	printf(" %d*%d=%2d\t", n, m, n*m);
    	printf("\n");
	}

    return 0;
}
