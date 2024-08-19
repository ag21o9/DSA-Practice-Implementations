#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void insert(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void insert_front(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertPos(Node *&head, Node *&tail, int value, int pos)
{

    Node *toInsert = new Node(value);
    Node *temp = head;
    if (pos == 1)
    {
        insert_front(head, value);
        return;
    }

    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insert(tail, value);
        return;
    }

    toInsert->next = temp->next;
    temp->next = toInsert;
}

void deletenode(Node *&head, int pos)
{
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

Node *reverseLL(Node *head,int k)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node * next = NULL;
    Node * curr = head;
    Node * prev = NULL;
    int cnt = 0;

    while(curr!=NULL && cnt<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    if(next!=NULL){
        head->next = reverseLL(next,k);
    }

    return prev;

}

int main()
{
}
