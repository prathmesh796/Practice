#include<iostream>

using namespace std;

class BST
{
	struct node
	{
		int data;
		node *left, *right;
		
		node()
		{
			left = right = NULL;
		}
	}*root;
	
public:
	BST()
	{
		root = NULL;
	}
	
	node *return_root()
	{
		return root;
	}
	
	void insert(int);
	void del(int);
	int search(int);
	void display(node*);
	void leveldisplay(node*);
	void mirroring(node*);
	void displaylevelwise(node*);
};

void BST :: insert(int d)
{
	node *temp = root, *newnode = new node;
	newnode->data = d;
	
	if(root == NULL)
	{
		root = newnode;
		cout<<"Root node created!"<<endl;
	}
	
	else
	{
		while(true)
		{
			if(d < temp->data)
			{
				if(temp->left == NULL)
				{
					temp->left = newnode;
					cout<<"Node inserted on left successfully!"<<endl;
					break;
				}
				
				else
				{
					temp = temp->left;
				}
			}
			
			else if(d > temp->data)
			{
				if(temp->right == NULL)
				{
					temp->right = newnode;
					cout<<"Node inserted on right successfully!"<<endl;
					break;
				}
				
				else
				{
					temp = temp->right;
				}
			}
			
			else
			{
				cout<<"Data entry is repeated"<<endl;
				break;
			}
		}
	} 
}

void BST :: display(node *temp)
{
	if(temp != NULL)
	{
		display(temp->left);
		cout<<temp->data<<"\t";
		display(temp->right);
	}
}

int BST :: search(int key)
{
	node *temp = root;
	int flag = 0;
	
	while(temp != NULL)
	{
		if(key < temp->data)
		{
			temp = temp->left;
		}
		
		else if(key > temp->data)
		{
			temp = temp->right;
		}
		
		else
		{
			flag = 1;
			break;
		}
	}
	return flag;
}

void BST :: leveldisplay(node* temp)
{
	node* Q[20];
	int level = 0, front = 0, rear = 1, leaf = 0;
	
	if(temp == NULL)
	{
		cout<<"The tree is empty...!"<<endl;
	}
	
	else
	{
		Q[0] = temp, Q[1] = NULL;
		cout<<"\nLEVEL "<<level++<<" ==> ";
		
		while(front < rear)
		{
			temp = Q[front++];
			
			if(temp == NULL)
			{
				cout<<"\nLEVEL"<<level++<<"==>";
				Q[++rear] = NULL;
			}
			
			else
			{
				cout<<temp->data<<"\t";
				
				if(temp->left != NULL)
				{
					Q[++rear] = temp->left;
				}
				
				if(temp->right != NULL)
				{
					Q[++rear] = temp->right;
				}
				
				if(temp->left == NULL && temp->right == NULL)
				{
					leaf++;
				}
				
			}
		}
	}
	
	cout<<"\nDepth of tree: "<<level - 1<<endl;
	cout<<"Number of leaf nodes: "<<leaf<<endl;
}

void BST :: mirroring(node* temp)
{
	node* Q[20];
	int front = 0, rear = 1;
	
	if(temp == NULL)
	{
		cout<<"The tree is empty...!"<<endl;
	}
	
	else
	{
		Q[0] = temp, Q[1] = NULL;
		
		while(front < rear)
		{
			temp = Q[front++];
			
			if(temp == NULL)
			{
				Q[++rear] = NULL;
			}
			
			else
			{
				cout<<temp->data<<"\t";
				
				if(temp->left != NULL)
				{
					Q[++rear] = temp->left;
				}
				
				if(temp->right != NULL)
				{
					Q[++rear] = temp->right;
				}
			}
		}
	}
}

void BST :: del(int num)
{
	node *s[20], *ptemp = root, *temp = root, *rtemp, *prtemp;
	char flag;
	
	while(temp->data != num && temp != NULL)
	{
		if(num < temp->data)
		{
			ptemp = temp;
			flag = 'l';
			temp = temp->left;
		}
		
		else
		{
			ptemp = temp;
			flag = 'r';
			temp = temp->right;
		}
	}
	
	if(temp != NULL)
	{
		if(temp->left == NULL && temp->right == NULL)
		{
			if(temp == root)
			{
				root = NULL;
			}
			
			else if(flag == 'r')
			{
				ptemp->right = NULL;
			}
			
			else
			{
				ptemp->left = NULL; 
			}
		}
		
		else if(temp->left != NULL && temp->right != NULL)
		{
			prtemp = temp->right;
			rtemp = temp->right;
			
			while(rtemp->left != NULL)
			{
				prtemp = rtemp;
				rtemp = rtemp->left;
			}
			
			prtemp->left = rtemp->right;
			
			if(temp == root)
			{
				root = rtemp;
			}
			
			else if(flag == 'l')
			{
				ptemp->left = rtemp;
			}
			
			else
			{
				ptemp->right = rtemp;
			}
			
			rtemp->left = temp->left;
			
			if(rtemp != prtemp)
			{
				rtemp->right = temp->right;
			}
		}
		
		else if(temp->right != NULL && temp->left == NULL)
		{
			if(root == temp)
			{
				root = temp->right;
			}
			
			else if(flag == 'l')
			{
				ptemp->left = temp->right;
			}
			
			else
			{
				ptemp->right = temp->right;
			}
		}
		
		else if(temp->right == NULL && temp->left != NULL)
		{
			if(root == temp)
			{
				root = temp->left;
			}
			
			else if(flag == 'l')
			{
				ptemp->left = temp->left;
			}
			
			else
			{
				ptemp->right = temp->left;
			}
		}
	}
	
	else
	{
		cout<<"Node that you want to delete is not present in the tree"<<endl;
		delete temp;
	} 
}

int main()
{
	BST tree;
	int i, val, key, op;
	char ans, ANS;
	
	do
	{
		cout<<"\nEnter the value of the node: ";
		cin>>val;
		
		tree.insert(val);
		
		cout<<"\nDo you want to add more nodes? (y/n): ";
		cin>>ans;
	}while(ans == 'y' || ans == 'Y');
	
	do
	{
		cout<<"\nChoose the following preferred operation:"<<endl;
		cout<<"1. Insert a new node in the tree"<<endl;
		cout<<"2. Displaying the tree"<<endl;
		cout<<"3. Searching a node in the tree"<<endl;
		cout<<"4. Levelwise displaying of the tree"<<endl;
		cout<<"5. Displaying the mirror image of the tree"<<endl;
		cout<<"6. Deleting a node of the tree"<<endl;
		
		cin>>op;
		
		switch(op)
		{
			case 1:
			cout<<"**********Inserting a new node**********"<<endl;
			cout<<"Enter the value of the node: ";
			cin>>val;
			tree.insert(val);
			break;
			
			case 2:
			cout<<"**********Displaying the tree**********"<<endl;
			tree.display(tree.return_root());
			break;
			
			case 3:
			cout<<"**********Searching a node in the tree**********"<<endl;
			cout<<"Enter the value of the node that you want to search: ";
			cin>>key;
			i = tree.search(key);
			
			if(i == 1)
			{
				cout<<"The node with the value "<<key<<" is present int the tree"<<endl;
			}
			
			else
			{
				cout<<"The node with the value "<<key<<" is absent int the tree"<<endl;
			}
			break;
			
			case 4:
			cout<<"**********Levelwise displaying of the tree**********"<<endl;
			tree.leveldisplay(tree.return_root());
			break;
			
			case 5:
			cout<<"**********Displaying the mirror image of the tree**********"<<endl;
			tree.mirroring(tree.return_root());
			break;
			
			case 6:
			cout<<"**********Deleting a node of the tree**********"<<endl;
			cout<<"Enter the value of the node that you want to delete: ";
			cin>>val;
			tree.del(val);
			cout<<"Tree after deletion of node: "<<endl;
			tree.display(tree.return_root());
			break;
		}
		
		cout<<"\nDo you want to add more nodes? (y/n): ";
		cin>>ANS;
	}while(ANS == 'Y' || ANS == 'y');
}
