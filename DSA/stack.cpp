#include<iostream>
#include<math.h>
#include<string.h>
#include<ctype.h>

using namespace std;

class stack
{
	struct node
	{
		float data;
		node* next;
	};
	node* top;

	public:
		stack()
		{
			top = NULL;
		}
		
		int Empty();
		void Push(float);
		float Pop();
		int Top();
};

int stack :: Empty()
{
	if(top == NULL)
	{
		return 1;
	}
	
	else
	{
		return 0;
	}
}

void stack :: Push(float x)
{
	node* newnode;
	newnode = new node;
	newnode -> data = x;
	newnode -> next = top;
	top = newnode;
}

float stack :: Pop()
{
	node* temp = top;
	float x;
	top = top -> next;
	x = temp -> data;
	delete temp;
	return x;
}

int stack :: Top()
{
	return top -> data;
}

int Priority(char op)
{
	if(op == '(' || op == ')')
	{
		return 0;
	}
	
	else if(op == '+' || op == '-')
	{
		return 1;
	}
	
	else if(op == '*' || op == '/')
	{
		return 2;
	}
	
	else if(op == '^')
	{
		return 3;
	}
	
	else
	{
		return 4;
	}
}

float Operation(char op, float a, float b)
{
	float p;
	
	if(op == '*')
	{
		p = a * b;
	}
	
	else if(op == '/')
	{
		p = a / b;
	}
	
	else if(op == '+')
	{
		p = a + b;
	}
	
	else if(op == '-')
	{
		p = a - b; 
	}
	
	else if(op == '^')
	{
		p = pow(a, b);
	}
	
	return p;
}

void Infix_to_Postfix(char infix[20])
{
	char post[20], x, token;
	int i, j = 0;
	stack s;
	
	for(i = 0; infix[i] != '\0'; i++)
	{
		token = infix[i];
		
		if(isalnum(token))
		{
			post[j++] = token;
		}
		
		else
		{
			if(token == ')')
			{
				while((x = s.Pop()) != '(')
				{
					post[j++] = x;
				}	
			}
			
			else
			{
				while(!s.Empty() && Priority(token) <= Priority(s.Top()))
				{
					post[j++] = s.Pop();
				}
				s.Push(token);
			}
		}
	}
	
	while(!s.Empty())
	{
		post[j++] = s.Pop();
		post[j] = '\0';
	}
	
	cout<<"INFIX TO POSTFIX EXPRESSION ===>"<<post<<endl;
}

void Infix_to_Prefix(char infix[20])
{
	char prefix[20], x, token;
	int i, j = 0;
	stack s;

	for(i = strlen(infix) - 1; i >= 0; i--)
	{
		token = infix[i];

		if(isalnum(token))
		{
			prefix[j++] = token;
		}

		else
		{
			if(token == ')')
			{
				s.Push(token);
			}

			else
			{
				if(token == '(')
				{
					while((x = s.Pop()) != ')')
					{
						prefix[j++] = x;
					}
				}

				else
				{
					while(!s.Empty() && Priority(token) < Priority(s.Top()))
					{
						prefix[j++] = s.Pop();
					}
					s.Push(token);
				}
			}
		}
	}

	while(!s.Empty())
	{
		prefix[j++] = s.Pop();
		prefix[j] = '\0';
	}

	cout<<"INFIX TO PREFIX EXPRESSION ===>";

	for(i = strlen(prefix) - 1; i >= 0; i--)
	{
		cout<<prefix[i];
	}
	cout<<endl;
}

float Postfix_Evaluation(char string[20])
{
	int i;
	char token;
	float op1, op2, result, val;
	stack s;

	for(i = 0; string[i] != '\0'; i++)
	{
		token = string[i];

		if(isalpha(token))
		{
			cout<<"Enter the value of "<<token<<" ==>";
			cin>>val;
			s.Push(val);
		}

		else if(isdigit(token))
		{
			s.Push(token);
		}

		else
		{
			op2 = s.Pop();
			op1 = s.Pop();
			result = Operation(token, op1, op2);
			cout<<"Result:";
			s.Push(result);
		}
	}

	return s.Pop();
}

int main()
{
	int choice;
	char infix[20], post[20];
	
	do
	{
		cout<<"SELECT YOUR PREFERRED CHOICE:"<<endl;
		cout<<"1. INFIX TO POSTFIX"<<endl;
		cout<<"2. INFIX TO PRETFIX"<<endl;
		cout<<"3. POSTFIX EVALUATION"<<endl;
		cout<<"4. PREFIX EVALUATION"<<endl;
		cout<<"5. EXIT";
		cout<<"\n";
		cout<<"Enter your choice:"<<endl;
		cin>>choice;
		
		switch(choice)
		{
			case 1:
			cout<<"Enter the infix expression ===> ";
			cin>>infix;
			Infix_to_Postfix(infix);
			break;

			case 2:
			cout<<"Enter the infix expression ===> ";
			cin>>infix;
			Infix_to_Prefix(infix);
			break;

			case 3:
			cout<<"Enter the Postfix expression ===> ";
			cin>>post;
			cout<<Postfix_Evaluation(post)<<endl;
			break;
		}
	}while(choice < 5);	
}
