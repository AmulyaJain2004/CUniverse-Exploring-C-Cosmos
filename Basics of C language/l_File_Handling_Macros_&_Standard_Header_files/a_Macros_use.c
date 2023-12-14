#include "stdio.h"
#define SIZE 
#define LENGTH
int main()
{

	#if defined (SIZE)
	printf("SIZE defined working \n");
	#endif
	
	#if defined (LENGTH)
	#define SIZE1 5
	int myA[] = {0,1,2,3,4} ;
	
	printf("printing elements \n");
	for (int i = 0; i < SIZE1 ; i++)
	{
		printf("%d \n",myA[i]);
	} 
	#endif
	
	return 0;
}
