#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
int main(){

//creat node head and assign value 5
    Node *head = new Node();
    head->data = 5;

// creat node n2 and assign value 7
    Node *n2 = new Node();
    n2->data = 7;
// creat node n3 and assign value 8
    Node *n3 = new Node();
    n3->data = 8;

//link head ->n2
    head->next = n2;

// link n2 ->n3
    n2->next = n3;

// link n3 ->NUll
    n3->next = NULL;

    //print
    // Node *c = head;
    // while (c!=NULL)
    // {
    //     cout << c->data << " ";
    //     c = c->next;
    // }
    // cout << endl;

    //delete n2

    // head->next = n3;
    // Node *d = head;
    // while (d != NULL)

    // {
    //     cout << d->data << " ";
    //     d = d->next;
    // }



    //add more number
    Node *a = new Node();
    a->data = 10;

    a->next=n3;
    n2->next = a;

    Node *c = head;
    while (c != NULL)
    {
        cout << c->data << " ";
        c = c->next;
    }
    cout << endl;

    return 0;
}