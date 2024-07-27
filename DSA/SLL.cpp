#include<iostream>

using namespace std;

class SLL
{
    struct node
    {
        int data;
        node *next;
    };
    node *head;

    public:
        SLL()
        {
            head = NULL;
        }

        void createlist();
        void display();
        void append();
        void insert();
        void del();
        void search();
};

void SLL :: createlist()
{
    int n, x;

    cout<<"Enter the number of elements you want in the list : ";
    cin>>n;

    while(n--)
    {
        if(head == NULL)
        {
            cout<<"Enter the value of Head node : ";
            cin>>x;

            node *newnode = new node();
            newnode->data = x;
            newnode->next = NULL;
            head = newnode;
        }

        else
        {
            cout<<"Enter the value of next node : ";
            cin>>x;

            node *temp = head;
            node *newnode = new node();
            newnode->data = x;
            newnode->next = NULL;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newnode;
        }
    }

    cout<<"Your list is created"<<endl;
}

void SLL :: display()
{
    node *temp = head;

    cout<<"Single-Linked-List : ";

    while(temp != NULL)
    {
        cout<<temp->data<<"\t\t";
        temp = temp->next;
    }
    cout<<endl;
}

void SLL :: append()
{
    node *temp = head;
    node *newnode = new node;

    int x;

    cout<<"Enter the value of next node : ";
    cin>>x;

    newnode->data = x;
    newnode->next = NULL;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;

    cout<<"Element added to the list"<<endl;
}

void SLL :: insert()
{
    node *temp = head;
    node *newnode = new node;

    int x, a;

    cout<<"Enter the value of after which you want to insert the new node : ";
    cin>>a;

    while(temp->data != a)
    {
        temp = temp->next;
    }

    cout<<"Enter the value of node : ";
    cin>>x;

    newnode->data = x;
    newnode->next = temp->next;
    temp->next = newnode;

    cout<<"Element added to the list"<<endl;
}

void SLL :: search()
{
    int x;

    node *temp = head;

    cout<<"Enter the value of node that you want to search : ";
    cin>>x;

    while(temp->data != x && temp != NULL)
    {
        temp = temp->next;
    }

    if(temp == NULL)
    {
        cout<<"UNSUCCESSFUL SEARCH - Node not found!!!"<<endl;
    }

    else
    {
        cout<<"SUCCESSFUL SEARCH - "<<temp->data<<endl; 
    }
}

void SLL :: del()
{
    int x;

    node *temp = head, *ptemp = head;
    
    cout<<"Enter the value of node that you want to delete : ";
    cin>>x;

    while(temp->data != x && temp != NULL)
    {
        ptemp = temp;
        temp = temp->next;
    }

    if(temp != NULL)
    {
        if(temp == head)
        {
            head = temp->next;
            delete temp;
            delete ptemp;
        }

        else if(temp->next != NULL && temp != head)
        {
            ptemp->next = temp->next;
            delete temp;
        }

        else
        {
            ptemp->next = NULL;
            delete temp;
        }
    }

    else
    {
        cout<<"Node not present in the list"<<endl;
        delete temp;
    }

}

int main()
{
    SLL s;

    int ch;

    do
    {
        cout<<"\nChoose the following operations : "<<endl;
        cout<<"1. Create the Single linked List"<<endl;
        cout<<"2. Display the Single linked List"<<endl;
        cout<<"3. Append in the Single linked List"<<endl;
        cout<<"4. Insert in the Single linked List"<<endl;
        cout<<"5. Search in the Single linked List"<<endl;
        cout<<"6. Delete in the Single linked List"<<endl;
        cout<<"7. Exit"<<endl;

        cin>>ch;

        cout<<endl;

        switch (ch)
        {
        case 1:
            s.createlist();
            break;
        
        case 2:
            s.display();
            break;

        case 3:
            s.append();
            s.display();
            break;

        case 4:
            s.insert();
            s.display();
            break;

        case 5:
            s.search();
            break;

        case 6:
            s.del();
            s.display();;
            break;

        default:
            break;
        }
    } while (ch < 7);
    
    
}