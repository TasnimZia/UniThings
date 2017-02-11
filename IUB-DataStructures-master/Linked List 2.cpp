#include <iostream>

using namespace std;


class LinkedList
{
    struct ListNode
    {
        float data;
        struct ListNode *next;
    };


    ListNode * Head;



    public:
        LinkedList()
        {
            Head = NULL;
        }

        ~LinkedList()
        {
            ListNode * current_node_pointer, * delete_node_pointer;

            current_node_pointer = Head;

            while (current_node_pointer != NULL)
            {
                delete_node_pointer = current_node_pointer;

                current_node_pointer = current_node_pointer -> next;

                delete delete_node_pointer;
            }

            Head = NULL;
        }

        void appendNode(float num)
        {
            ListNode * newNode, * current_node_pointer;

            newNode = new ListNode;

            newNode -> data = NULL;
            newNode -> next = NULL;

            if (Head == NULL)
                Head = newNode;

            else
            {
                current_node_pointer = Head;

                while (current_node_pointer -> next != NULL)
                {
                    current_node_pointer = current_node_pointer -> next;
                }

                current_node_pointer -> next = newNode;
            }
        }

        void displayList()
        {
            cout<<"Linked List Values: " <<endl;

            ListNode * current_node_pointer;

            current_node_pointer = Head;

            while (current_node_pointer != NULL)
            {
                cout<<current_node_pointer -> data << " -> ";

                current_node_pointer = current_node_pointer -> next;

            };

            cout<<"Nola!"<<endl;

        }

};

int main()
{

    LinkedList tester;

    for (int i = 1; i <= 3; i++)
    {
        cout<<endl<<"Please enter your node data: ";
        float test_data;
        cin>>test_data;

        tester.appendNode(test_data);
    }


    tester.displayList();

    return 0;
}
