#include <iostream>
using namespace std;
class node
{
    public:

    int data;
    node * next;

    node(int data_input)
    {
        this->data =data_input;
        this->next = NULL;
    }
};

void printnode(node * &node)
{
    cout<<"value " <<node->data;
    cout<<"address"<<node->next;
}

void printlinkedist(node * &head)
{
    if(head==NULL)
    {
        cout<<"the linked list is still empty!!"<<endl;
        return ;
    }

    node *temp;
    temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
}

int main()
{

    node*head=NULL;
    node * node1 = new node(5);
    head = node1;
    printlinkedist(head);
    cout<<endl;

    node * node2 = new node(7);
    node1->next = node2;
    printlinkedist(head);
    cout<<endl;

    node * node3 = new node(8);
    node2->next = node3;
    printlinkedist(head);
    cout<<endl;

    return 0;
}