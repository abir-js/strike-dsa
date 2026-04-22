#include <iostream>
#include <queue>
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

    void preOrderTraversal(Node *root)
    {
        if (!root)
            return;

        cout << root->data << " ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }

    void inOrderTraversal(Node *root)
    {
        if (!root)
            return;

        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }

    void postOrderTraversal(Node *root)
    {
        if (!root)
            return;

        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout << root->data << " ";
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

    int choice;

    while (true)
    {
        cout << "\n1. In-order\n2. Post-order\n3. Pre-order\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "In-order Traversal: ";
            rootNode->inOrderTraversal(rootNode);
            cout << endl;
            break;

        case 2:
            cout << "Post-order Traversal: ";
            rootNode->postOrderTraversal(rootNode);
            cout << endl;
            break;

        case 3:
            cout << "Pre-order Traversal: ";
            rootNode->preOrderTraversal(rootNode);
            cout << endl;
            break;

        case 4:
            cout << "Exiting...\n";
            return 0;

        default:
            cout << "Invalid choice!\n";
        }
    }
}