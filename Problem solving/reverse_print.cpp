#include <bits/stdc++.h>
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
        }
        else
        {
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = n;
        }
    }

    // reverse print
    void reversePrint()
    {
        Node *ptr = head;
        Node *tail = NULL;
        if (head == NULL){}
        else
        {
            while (ptr != NULL)
            {
                Node *index = head;
                while (index->next != tail)
                {
                    index = index->next;
                }
                tail = index;
                ptr = ptr->next;
                cout << index->value << endl;
            }
        }
    }
};
int main()
{
    Node *n1;
    int count = 0, val = 0,data;
    singlyLinkedList s1;
    cin >>count; // Number of test case
    for (int i = 0; i < count; i++)
    {
        cin >> val; // How many value you want to insert
        for (int j = 0; j < val; j++)
        {
            data = 0;
            n1 = new Node;
            cin >> data;
            n1->value = data;
            s1.insertNode(n1);
        }
        s1.reversePrint();
        s1.head = NULL; // Here we assign head as NULL because this is linked list and in second alteration of input this will link to first and then print it again.
        // So to prevent from this we assigned head as NULL
    }
}
