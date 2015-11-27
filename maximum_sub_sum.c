#include "stdio.h"
int maximum(int a, int b)
{
        return (a>b)?a:b;
}
int maximum_subsum(int A[],int n)
{
	int global_max = 0;
	int local_max = 0;
	for(int i =0; i<n; i++) 
	{
		local_max = maximum(0,local_max+A[i]);
		global_max = maximum(local_max,global_max);
	}
	return global_max;
}
int main(void)
{
        int A[] = {-2,1,-3,4,-1,2,1,-5,4};
        printf("%d",maximum_subsum(A,9));
        return 0;
}
