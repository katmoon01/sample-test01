#include <iostream>
#include <string>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *head = new Node();
    head->data = 1;
    head->next = NULL;

    Node *second = new Node();
    second->data = 2;
    second->next = NULL;

    Node *third = new Node();
    third->data = 3;
    third->next = NULL; 

    //Link every node together
    head->next   = second;
    second->next = third;
    third->next  = NULL;

    //Access to node
    int data = 0;

    Node *p = head;
    while(p!=nullptr)
    {
        data = p->data;
        p = p->next;
        cout<<data<<"->";
    }
    cout<<"NULL"<<endl;

    return 0;
}