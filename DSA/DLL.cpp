#include<iostream>

using namespace std;

class DLL
{
    struct node
    {
        int data;
        node *next;
        node *prev;
    };
    node *head;

    public:
        DLL()
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

void DLL :: createlist()
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
            newnode->prev = NULL;
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
            newnode->prev = NULL;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newnode;
            newnode->prev = temp;
        }
    }

    cout<<"Your list is created"<<endl;
}

void DLL :: display()
{
    node *temp = head;

    cout<<"Double-Linked-List : ";

    while(temp != NULL)
    {
        cout<<temp->data<<"\t\t";
        temp = temp->next;
    }
    cout<<endl;
}

void DLL :: append()
{
    node *temp = head;
    node *newnode = new node;

    int x;

    cout<<"Enter the value of next node : ";
    cin>>x;

    newnode->data = x;
    newnode->next = NULL;
    newnode->prev = NULL;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->prev = temp;

    cout<<"Element added to the list"<<endl;
}

void DLL :: insert()
{
    node *temp = head, *ctemp;
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
    newnode-> prev = temp;
    temp->next = newnode;
    ctemp = newnode->next;
    ctemp->prev = newnode;

    cout<<"Element added to the list"<<endl;
}

void DLL :: search()
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

void DLL :: del()
{
    int x;

    node *temp = head, *ptemp = head, *ctemp;
    
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
            head->prev = NULL;
            delete temp;
            delete ptemp;
        }

        else if(temp->next != NULL && temp != head)
        {
            ptemp->next = temp->next;
            ctemp = temp->next;
            ctemp->prev = ptemp;
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
    DLL s;

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