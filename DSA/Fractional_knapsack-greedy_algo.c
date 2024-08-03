#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
//#include <unistd.h>
#include <sys/types.h>

typedef struct obj
{
	int profit, weight;
}obj;

static int compare(const void *a, const void *b) 
{
	obj *obj1 = (obj *)a;
	obj *obj2 = (obj *)b;
	
	double r1 = (double)obj1->profit / (double)obj1->weight;
	double r2 = (double)obj2->profit / (double)obj2->weight;
	
	if(r1 > r2)
	{
		return 1;
	}
	
	else
	{
		return 0;
	}
	
}

double fractional_knapsack(int W, obj arr[], int N)
{
	qsort(arr, N, sizeof(int), compare);
	
	double final_value = 0.0;
	
	for(int i = 0; i < N; i++)
	{
		if(arr[i].weight <= W)
		{
			W -= arr[i].weight;
			final_value += arr[i].profit;
		}
		
		else
		{
			final_value += arr[i].profit * ((double)W / (double)arr[i].weight);
			break;
		}
	}
	
	return final_value;
}

int main()
{
	int W, N;
	
	printf("Enter the weight : ");
	scanf("%d", &W);
	
	printf("Enter the no. of objects : ");
	scanf("%d", &N);
	
	obj arr[100];
	printf("Enter the profit and weight of each object : \n");
	for(int i = 0; i < N; i++)
	{
		scanf("%d %d", &arr[i].profit, &arr[i].weight);
	}
	
	double max_profit = fractional_knapsack(W, arr, N);
	
	printf("The maximum profit is : %lf\n", max_profit);
	
	return 0;
}

/*
comp130@comp130:~/Desktop$ gcc daa_01.c -o daa_01
comp130@comp130:~/Desktop$ ./daa_01
Enter the weight : 100
Enter the no. of objects : 5
Enter the profit and weight of each object : 
5 10
4 25
11 5
6 4
8 10
The maximum profit is : 48.000000
comp130@comp130:~/Desktop$ 

*/
