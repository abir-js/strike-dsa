
#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node (int data, Node *ptr){
        this->data = data;
        this->next = ptr;
    }
};

int main(){
    Node *LL = new Node(10, NULL);
    cout<<LL->data;
    return 0;
}