#include<iostream>

using namespace std;

class Tree
{
	public:
		char data;
		int Lflag, Rflag;
		Tree *left, *right;
		
		Tree(char c = '\0')
		{
			data = c;
			Lflag = Rflag = 1;
			left = right = NULL;
		}
};

class Threaded_Tree
{
	Tree *head;
	
	public:
		Threaded_Tree()
		{
			head = new Tree;
			head->right = head;
		}
		void Create(char[]);
		void PreTrav();
		void InTrav();
};

void Threaded_Tree :: Create(char Ester[25])
{
	Tree *Skt[20], *Temp;
	int Top = -1, i = 0;
	
	while(Ester[i] != '\0')
	{
		Tree *node = new Tree(Ester[i]);
		node->left = node->right = head;
		
		if(isalnum(Ester[i]));
		
		else
		{
			node->right = Temp = Skt[Top--];
			
			while(Temp->left != head)
			{
				Temp = Temp->left;
			}
			
			Temp->left = node;
			node->Rflag = 0;
			node->left = Temp = Skt[Top--];
			
			while(Temp->right != head)
			{
				Temp = Temp->right;
			}
			
			Temp->right = node;
			node->Lflag = 0;
		}
		
		Skt[++Top] = node;
		i++;
	}
	
	head->left = Skt[Top--];
}

void Threaded_Tree :: InTrav()
{
	Tree *Temp = head->left;
	
	do
	{
		while(Temp->Lflag == 0)
		{
			Temp = Temp->left;
			
		}
		cout<<Temp->data;
			Temp = Temp->right;
			cout<<Temp->data;
			Temp = Temp->right;
		
		
	}while(Temp != head);
}

void Threaded_Tree :: PreTrav()
{
	Tree *Temp = head->left;
	
	do
	{
		while(Temp->Lflag == 0)
		{
			cout<<Temp->data;
			Temp = Temp->left;
		}
		
		cout<<Temp->data;
		Temp = Temp->right;
		Temp = Temp->right;
	}while(Temp != head);
}

int main()
{
	Threaded_Tree B;
	char Ester[25];
	
	cout<<"Enter the Postfix Expression : ";
	cin>>Ester;
	
	B.Create(Ester);
	
	cout<<"Inorder Traversal : ";
	B.InTrav();
	cout<<endl;
	
	cout<<"Preorder Traversal : ";
	B.PreTrav();
	cout<<endl;
}
