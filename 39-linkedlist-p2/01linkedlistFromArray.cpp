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
};

int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node *head = NULL, *tail = NULL;
    // Node *head  = NULL;
    // Node *tail = NULL;

    for (int i = 0; i < n; i++)
    {
        if (!head)
        {
            // creates first node
            head = new Node(arr[0]);
            tail = head;
        }
        else
        {
            // creates other nodes and adds them
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
    }

    // traver the linked list
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}