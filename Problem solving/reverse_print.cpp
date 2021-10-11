#include<iostream>
using namespace std;
class Node
{
    public:
    int value;
    Node *next;

    Node()
    {
        value = 0;
        next = NULL;
    }
    Node(int v)
    {
        value = v;
    }
};
class singlyLinkedList
{
    public:
    Node *head;
    singlyLinkedList()
    {
        head = NULL;
    }
    singlyLinkedList(Node *n)
    {
        head = n;
    }

    // insert node
    void insertNode(Node *n)
    {
        Node *ptr = head;
        if (head == NULL)
        {
            head = n;
            cout << "Node appended in head." << endl;
        }
        else
        {
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = n;
           cout << "Node appended." << endl;
        }
    }

    // reverse print
    void reversePrint()
    {
        Node *ptr = head;
        Node *tail = NULL;
        if (head == NULL)
        {
            cout << "No any data to show" << endl;
        }
        else
        {
            while (ptr != NULL)
            {
                Node *index = head;
                while (index->next != tail)
                {
                    // cout << index->value << " "; // For check purpose use only
                    index = index->next;
                }
                tail = index;
                // cout << "\nValue : " << ptr->value << " Tail : " << index->value << endl;// For check purpose use only.
                ptr = ptr->next;
                cout << index->value << " ";
                
            }
            
        }
        
    }
};
int main()
{
    singlyLinkedList s1;
    for (int i = 1; i <= 10; i++)
    {
        Node *n1 = new Node;
        n1->value = i;
        s1.insertNode(n1);
    }
    cout << "Printing node in reverse order : ";
    s1.reversePrint();
    
}