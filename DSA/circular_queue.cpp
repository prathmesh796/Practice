#include<iostream>

#define Max 6

using namespace std;

class Queue
{
	int Q[Max], front, rear;
	
	public:
		Queue()
		{
			front = 0;
			rear = -1;
			for(int i = 0; i < Max; i++)
			{
				Q[i] = -1;
			}
		}
		
		int isFull();
		int isEmpty();
		int EnQueue(int);
		int DQueue(int);
		void Display();
};

int Queue :: isFull()
{
	if(rear != -1 && front == (rear + 1) % Max)
	{
		return 1;
	}
	
	else
	{
		return 0;
	}
}

int Queue :: isEmpty()
{
	if(rear = -1)
	{
		return 1;
	}
	
	else
	{
		return 0;
	}
}

int Queue :: EnQueue(int data)
{
	if(isFull())
	{
		return false;
	}
	
	else
	{
		rear = (rear + 1) % Max;
		Q[rear] = data;
		return true;
	}
}

int Queue :: DQueue(int data)
{
	if(! isEmpty())
	{
		data = Q[front];
		Q[front] = -1;
		cout << "The deleted element is : " << data << endl;
		front = (front + 1) % Max;
		
		if(front == (rear + 1) % Max)
		{
			front = 0;
			rear = 0;
		}
		return true;
	}
}

void Queue :: Display()
{
	for(int i = 0; i < Max; i++)
	{
		cout << Q[i] << "\t";
	}
}

int main()
{
	Queue Q1;
	
	int E, ch1;
	char ch2;
	
	do
	{
		cout << "Choose the preferred option" << endl;
		cout << "1. Insert an element" << endl;
		cout << "2. Delete an element" << endl;
		
		cin >> ch1;
		
		switch(ch1)
		{
			case 1:
			cout << "Enter the data:" << endl;
			cin >> E;
			
			if(Q1.EnQueue(E))
			{
				cout << "Data entered Successfully" << endl;
			}
			
			else
			{
				cout << "Queue is full" << endl;
			}
			
			break;
			
			case 2:
			if(Q1.DQueue(E))
			{
				cout << "Deleted element successfully: " << E << endl;
			}
			
			else
			{
				cout << "Queue is empty" << endl;
			}
			
			break;
		}
		
		cout << "Your queue is:";
		Q1.Display();
		
		cout << "\nDo you wany to continue? (y/n)" << endl;
		cin >> ch2;
		
	}while(ch2 == 'y');
	
	return 1;
}
