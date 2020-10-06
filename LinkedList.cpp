#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};


void printList(Node* node)
{
    while (node != NULL)
   {
        cout << node->data <<" ";
        node = node->next;
   }
  cout<<"\n";
}

Node *insertAtBegining(Node *head, int newData);
Node *insertAtEnd(Node *head, int newData);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        struct Node *head = NULL;
        for (int i = 0; i < n; ++i)
        {
            int data, indicator;
            cin>>data;
            cin>>indicator;
            if(indicator)
                head = insertAtEnd(head, data);
            else
                head = insertAtBegining(head, data);
        }
        printList(head);
    }
    return 0;
}


Node *insertAtBegining(Node *head, int newData)
{
   // Your code here
    struct Node *temp=new Node(newData);

     if(head==NULL)
     {
       head=temp;
       return head;
      }
     else
      {
        temp->next=head;
        head=temp;
       return head;
       }
 }

Node *insertAtEnd(Node *head, int newData)
{
 
   struct Node *temp=head;
   struct Node *temp2=new Node(newData);

    if(head==NULL)
    {
      head=temp2;
      return head;
    }
     else
     {
       while(temp->next!=NULL)
      {
        temp=temp->next;
      }
        temp->next=temp2;
         return head;
    }
}


