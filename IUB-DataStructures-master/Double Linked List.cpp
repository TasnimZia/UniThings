#include<iostream>
#include<cstdlib>

using namespace std;


class DoubleLinkedList
{

        struct DoubleListNode
        {
                int value;
                struct DoubleListNode *next;
                struct DoubleListNode *prev;
        };

DoubleListNode *Head;
DoubleListNode *Tail;




public:
    DoubleLinkedList()
    {
        Head=NULL;
        Tail=NULL;
    }

    ~DoubleLinkedList()
    {
        DoubleListNode * nodePtr, * delPtr;

        nodePtr = Head;

        while (nodePtr != NULL)
        {
            delPtr = nodePtr;
            nodePtr = nodePtr -> next;
            delPtr = NULL;      //ei line ti
            delete delPtr;      //ar ei line ti         akta null kore, ar
        }

//        nodePtr = NULL; // using this instead of Head = null works too?

            Head = NULL;

    }


    void append_node(int num)
    {
        DoubleListNode * new_node = new DoubleListNode;
         new_node -> value = num;

         if (Head == NULL)
         {
             Head = new_node;
             Tail = new_node;
         }

         else
         {
             new_node -> prev = Tail;
             Tail -> next = new_node;
             Tail = new_node;
         }
    }


    void display_list()
    {
        cout<<"Linked List (First -> Last): "<<endl;

        DoubleListNode * current = Head;

        while(Head != NULL)
        {
            cout<<current->value;
            cout<<" >> ";

            if (current -> next != NULL)
            {

                current = current -> next;
            }
            else
            {
                cout<<"NULL " <<endl;
                break;
            }

        }
    }


    DoubleListNode * display_head()
    {
            return Head;
    }


    DoubleListNode * display_tail()
    {
            return Tail;
    }




//    void search_and_delete(int sVal)
//    {
//        DoubleListNode * current = Head;
//
////        DoubleListNode * new_node =
//
//        while (current != NULL)
//        {
//
//            if (current -> value == sVal)
//            {
//                current->next->prev = current->prev;
//                current->prev->next = current->next;
//                current = NULL;
//                delete current;
//            }
//
//
//                if (current -> next != Tail)
//                        current = current -> next;
//                else if (current-> next == Tail)
//                {
//                    if (sVal == Tail -> value)
//                    {
//                        DoubleListNode * temp = new DoubleListNode;
//                        temp = Tail;
//                        Tail = Tail -> prev;
//                        temp = NULL;
//                        delete temp;
//                    }
//                }
//
//            }
//        }


        DoubleListNode * search_return_node(int sVal)
        {
            DoubleListNode * curr = Head;

            DoubleListNode * dum = new DoubleListNode;

            dum -> value = 1000;

            if (Head == NULL)
            {
                return dum ;
            }
            while (curr  != Tail)
            {
                if (curr -> value == sVal)
                {
                    return curr;
                }

                curr = curr -> next;
            }
            if (Tail -> value == sVal )
            {
                return Tail;
            }
            return dum;

        }


        void delete_node(DoubleListNode * nod)
        {
            if (nod != Tail || nod != Head)
            {
                nod -> next -> prev = nod -> prev;
                nod -> prev -> next = nod -> next;
                nod = NULL;
                delete nod;
            }

            else if (nod == Tail)
            {
                Tail = nod -> prev;

                nod = NULL;

                delete nod;
            }

            else if (nod == Head)
            {
                Head = Head -> next;
                delete nod;
            }
        }


        void insert_node(DoubleListNode * fVal, int insert_val)
        {
            DoubleListNode * new_nod = new DoubleListNode;
            new_nod -> value = insert_val;

            if (fVal != Tail)
            {
                    new_nod -> next = fVal -> next;
                    new_nod -> prev = fVal;

                    fVal -> next -> prev = new_nod;
                    fVal -> next = new_nod;
            }




        }


};



int main()
{
    DoubleLinkedList test;

    test.append_node(5);

    test.append_node(6);

    test.append_node(7);


        cout<<test.search_return_node(7) -> value;

//    test.delete_node(test.search_return_node(7));

    test.display_list();


    test.append_node(7);

//     test.insert_node(test.search_return_node(7), 43);

     test.display_list();

//    test.search_and_delete(5);

//    if (test.display_tail()->next->value == NULL)
//        cout<<endl<<test.display_tail()->value;

//    test.display_list();

//    if (test.search_return_node(5) -> value < 1000)
//    {
//        cout<<test.search_return_node(5) -> value;
//    }


    return 0;
}
