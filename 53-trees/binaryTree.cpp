#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

int main()
{

    int x, leftValue, rightValue;
    cout << "Enter root node value: ";
    cin >> x;
    Node *rootNode = new Node(x);

    queue<Node *> q;

    q.push(rootNode);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << "Enter " << temp->data << "'s left node value: ";
        cin >> leftValue;
        if (leftValue != -1)
        {
            temp->left = new Node(leftValue);
            q.push(temp->left);
        }

        cout << "Enter " << temp->data << "'s right node value: ";
        cin >> rightValue;
        if (rightValue != -1)
        {
            temp->right = new Node(rightValue);
            q.push(temp->right);
        }
    }

    return 0;
}