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
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node *head = NULL, *tail = NULL;
    // Node *head  = NULL;
    // Node *tail = NULL;

    for (int i = 0; i < n; i++)
    {
        if (!head)
        {
            // creates first node
            head = new Node(arr[i]);
            tail = head;
        }
        else
        {
            // creates other nodes and adds them
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
    }

    //* Delete a Node
    // Delete first Node
    Node *temp = head;
    head = head->next;
    delete temp;

    // Delete last node
    temp = head;
    // go to last node, for more than 1 node
    Node *prev = NULL;
    while(temp->next){
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    delete temp;

    // 10, 20, 30, 40, 50
    // delete fourth node (40)
    temp = head;
    int step = 1;
    prev = NULL;
    while (temp->next && step <= 4)
    {
        prev = temp;
        temp = temp->next;
        step++;
    }
    prev->next = temp->next;
    delete temp;
    

    // traverse the linked list
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}