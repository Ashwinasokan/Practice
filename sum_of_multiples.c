#include "stdio.h"
int sum_multiples (int A[],int size,int n)
{
	int sum = 0;
	for(int i = 1; i<n; i++) 
	{
		int multiple = 0;
		for(int j = 0;j<size;j++)
		{
			if(i % A[j] == 0) 
			{
				multiple = 1;
				break;
			}	
		}
		if(multiple == 1)
		{
			sum += i;		
		}	
	}
	return sum;
}
int main(void)
{
        int A[] = {3,5};
        printf("%d\n",sum_multiples(A,2,1000));
        return 0;
}
