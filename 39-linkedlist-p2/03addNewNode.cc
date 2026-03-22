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
    int arr[] = {10, 30, 70, 20, 15, 25};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node *head = NULL, *tail = NULL;

    for (int i = 0; i < n; i++)
    {
        if (!head)
        {
            head = new Node(arr[i]);
            tail = head;
        } else {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
    }

    // Create and insert node
    Node *newNode = new Node(80);
    // add after 20;
    Node *temp = head;
    while(temp->data != 20 && temp != NULL){
        temp = temp->next;
    }

    if(temp->data == 20){
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // print LL
    temp = head;
    while (temp != NULL) 
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    

    return 0;
}