#include <queue>
#include <iostream>
using namespace std;

class Node
{
    // private:
public:
    int data;
    Node *left;
    Node *right;
    Node(int d);
    // ~BST();
};

Node::Node(int d)
{
    this->data = d;
    this->left = NULL;
    this->right = NULL;
}

Node *insertNode(Node *root, int data)
{
    if (root == NULL)
    {
        Node *root = new Node(data);
        return root;
    }
    if (data < root->data)
    {
        root->left = insertNode(root->left, data);
    }
    else
    {
        root->right = insertNode(root->right, data);
    }

    return root;
}

void putNode(Node *&root)
{
    int d;
    cout << "value : " << endl;
    cin >> d;

    while (d != -1)
    {
        root = insertNode(root, d);
        cin >> d;
    }
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {

            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    Node *root = NULL;
    putNode(root);

    levelOrderTraversal(root);
}