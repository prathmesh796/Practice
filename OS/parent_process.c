#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

void sort(int arr[], int n)
{
	int temp;
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = 0; j < n - i - 1; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int n;
	printf("Enter number of elements : ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Enter the elements : \n");
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	pid_t pid = fork();
	
	if(pid < 0)
	{
		perror("Fork failed");
		exit(1);
	}
	
	else if(pid == 0)
	{
		char *args[n + 2];
		args[0] = "./child";
		
		for(int i = 0; i < n; i++)
		{
			char *num_str = (char*)malloc(12);
			sprintf(num_str, "%d", arr[i]);
			args[i + 1] = num_str;
		}
		
		args[n + 1] = NULL;
		
		execve(args[0], args, NULL);
		perror("execve failed");
		exit(1);
	}
	
	else
	{
		wait(NULL);
		sort(arr, n);
		printf("Sorted array : ");
		
		for(int i = 0; i < n; i++)
		{
			printf("%d", arr[i]);
		}
		
		printf("\n");
		
		char *args[n + 2];
		args[0] = "./child";
		
		for(int i = 0; i < n; i++)
		{
			char *num_str = (char *)malloc(12);
			sprintf(num_str, "%d", arr[i]);
			args[i + 1] = num_str;
		}
		
		args[n + 1] = NULL;
		
		execve(args[0], args, NULL);
		perror("execve failed");
		exit(1);
	}
	
	return 0;
}

