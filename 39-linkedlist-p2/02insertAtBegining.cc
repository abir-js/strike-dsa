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

    Node *head = NULL;

    for (int i = 0; i < 5; i++)
    {
        if (!head)
        {
            head = new Node(arr[i]);
        }
        else
        {
            Node *temp = new Node(arr[i]);
            temp->next = head;
            head = temp;
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