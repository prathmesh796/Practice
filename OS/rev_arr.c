#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int n = argc - 1;
	int arr[n];
	
	for(int i = 1; i < argc; i++)
	{
		arr[i - 1] = atoi(argv[i]);
	}
	
	printf("reversed array : ");
	
	for(int i = n - 1; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}
	
	printf("\n");
	
	return 0;
}
