#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertAttail(Node *&tail, int value)
{
    Node *temp = new Node(value);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertAtHEad(Node *&head, int value)
{
    Node *temp = new Node(value);
    // head->next = temp;
    temp->next = head;
    temp->prev = NULL;
    head->prev = temp;
    head = temp;
}

void insertpos(Node *&head, Node *&tail, int value, int pos)
{
    if (pos == 1)
    {
        insertAtHEad(head, value);
    }
    else
    {
        Node *temp = head;
        int cnt = 1;
        while (cnt < pos - 1)
        {
            cnt++;
            temp = temp->next;
        }
        if (temp->next == NULL)
        {
            insertAttail(tail, value);
            return;
        }
        Node *nodetoinsert = new Node(value);
        nodetoinsert->prev = temp;
        nodetoinsert->next = temp->next;
        temp->next->prev = nodetoinsert;
        temp->next = nodetoinsert;
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertAtHEad(head,14);
    insertAttail(tail,11);
    insertpos(head,tail,2,2);

    print(head);
}