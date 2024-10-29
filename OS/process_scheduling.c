#include <stdio.h>
#include <stdbool.h>


struct Process {
	int pid;
	int arrival_time;
	int burst_time;
	int remaining_time;
	int completion_time;
	int waiting_time;
	int turnaround_time;
};

void calculateWaitingTime(struct Process proc[], int n) {
	int time = 0;
	int completed = 0;
	bool is_completed[n];
	
	for (int i = 0; i < n; i++) is_completed[i] = false;

	while (completed != n) {
		int min_index = -1;
		int min_time = 1000000;

		for (int i = 0; i < n; i++) {
			    if (proc[i].arrival_time <= time && !is_completed[i] && proc[i].remaining_time < min_time) {
			    	min_time = proc[i].remaining_time;
			    	min_index = i;
			    }
		}

		if (min_index != -1) {
			proc[min_index].remaining_time--;
			time++;
		    
		    // If a process is completed
			if (proc[min_index].remaining_time == 0) {
				proc[min_index].completion_time = time;
				proc[min_index].turnaround_time = proc[min_index].completion_time - proc[min_index].arrival_time;
				proc[min_index].waiting_time = proc[min_index].turnaround_time - proc[min_index].burst_time;
				is_completed[min_index] = true;
				completed++;
			}
		} 
		
		else {
			time++;
		}
	}
}

void calculateTurnaroundTime(struct Process proc[], int n) {
	for (int i = 0; i < n; i++) {
		proc[i].turnaround_time = proc[i].burst_time + proc[i].waiting_time;
	}
}

void printResults(struct Process proc[], int n) {
	printf("PID\tArrival Time\tBurst Time\tCompletion Time\tWaiting Time\tTurnaround Time\n");
	
	for (int i = 0; i < n; i++) {
		printf("%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", proc[i].pid, proc[i].arrival_time, proc[i].burst_time, proc[i].completion_time, proc[i].waiting_time, proc[i].turnaround_time);
	}
}

int main() {
	int n;
	printf("Enter the number of processes: ");
	scanf("%d", &n);

	struct Process proc[n];

	for (int i = 0; i < n; i++) {
		proc[i].pid = i + 1;
		printf("Enter arrival time and burst time for process %d: ", i + 1);
		scanf("%d%d", &proc[i].arrival_time, &proc[i].burst_time);
		proc[i].remaining_time = proc[i].burst_time;
	}

	calculateWaitingTime(proc, n);
	calculateTurnaroundTime(proc, n);
	printResults(proc, n);
	return 0;
}

