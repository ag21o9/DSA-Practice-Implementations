#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

int length(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != 0)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

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

void sort(Node *head, int len)
{
    Node *curr = head;
    // Node * prev = NULL;

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i; j++)
        {
            if ((curr->data) > (curr->next->data))
            {
                Node *tempo = curr;
                curr->next = curr->next->next;
                curr->next->next = tempo;
            }
            else
            {

                curr = curr->next;
            }
        }
    }
}

int main()
{
    Node *node = new Node(13);
    Node *head = node;
    Node *tail = node;
    insert(tail, 11);
    insert(tail, 1);
    insert(tail, 19);
    insert(tail, 9);
    insert(tail, 10);
    insert(tail, 3);
    insert_front(head, 2);
    print(head);
    cout << endl;
    // cout << length(head);
    // cout << endl;
    // sort(head, length(head));
    // print(head);
}