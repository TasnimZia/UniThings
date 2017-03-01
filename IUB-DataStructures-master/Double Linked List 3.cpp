#include <iostream>

#include <cstdlib>
#include <cstdio>

using namespace std;


struct node
{
    int data;

    struct node * next;
    struct node * previous;
};

struct node * start;

class DoubleLinkedList
{
    public:
        void create_list(int value);
        void add_to_start(int value);
        void add_after_position(int value, int position);
        void delete_value(int value);
        void search_value(int value);
        void display_iist();
        void list_length();
        void reverse_list();

        DoubleLinkedList()
        {
            start = NULL;
        }
};


int main()
{
    DoubleLinkedList list;


    /*cout<<"Del";*/
    
    list.delete_value(3);
    list.add_after_position(2, 5);
    list.add_to_start(53);
/*    list.delete_value(3);*/    

    list.create_list(5);
    
    list.add_after_position(2, 5);
    list.create_list(5);
    list.create_list(5);

    


    list.add_to_start(53);


    list.delete_value(3);
    list.add_after_position(2, 5);

    return 0;
}




void DoubleLinkedList::create_list(int value)
{
    struct node * new_node;
    new_node = new(struct node);
    new_node -> data = value;
    new_node -> next = NULL;

    struct node * current = start;

    if (current == NULL)
    {
        new_node -> previous = NULL;
        start = new_node;
    }
    else
    {
        while (current -> next != NULL)
        {
            current = current -> next;
        }

        new_node -> previous = current;
        current -> next = new_node;
    }

    cout<<"Linked List Created!" <<endl;
}

void DoubleLinkedList::add_to_start(int value)
{

    if (start == NULL)
    {
        cout<<"Please create a list before adding to first." <<endl;
        return;
    }
    struct node * new_node;
    new_node = new struct node;
    new_node -> data = value;

    new_node -> next = start;
    new_node -> previous = NULL;

    start -> previous = new_node;
    start = new_node;

    cout<<"Element Inserted At First.!"<<endl;

}

void DoubleLinkedList::add_after_position(int value, int position)
{
    if (start == NULL)
    {
        cout<<"Please create a list before adding to first." <<endl;
        return;
    }

    struct node * new_node;
    new_node = new struct node;
    new_node -> data = value;

    struct node * current = start;

    for (int i = 0; i < position - 1; i++)
    {
        current = current -> next;

        if (current == NULL)
        {
            cout<<"List does not have that many elements. "<<endl;
            break;
        }

        if (current->next == NULL)
        {
            current -> next = new_node;
            new_node -> previous = current;
            new_node -> next = NULL;
        }
        else
        {
            new_node -> next = current -> next;
            new_node -> previous = current;

            new_node -> next -> previous = new_node;
            new_node -> previous -> next = new_node;

/*            current ->
*/        }

            

    }

 cout<<"Element inserted at position " << position <<"! "<<endl;

}

void DoubleLinkedList::delete_value(int value)
{
    struct node * current = start;

    if (start == NULL)
    {
        cout<<"List is empty! Cannot delete!" <<endl;

        return;
    }

     struct node * temp; 

     if (start -> data == value)
     {
        temp = start;

        start = start -> next;

        start -> previous = NULL;

         free(temp);

         cout<<"Element Deleted!" <<endl;

         return;
     }



    while (current -> next -> next != NULL)
    {

        if (current -> next -> data == value)
    {
        temp = current -> next;
        current -> next = temp -> next;
        temp -> next -> previous = current;
        free(temp);

        cout<<"Element deleted!" <<endl;

        return;

        current = current -> next;

    }

    }


        
        if (current -> next -> data == value)
        {
            temp = current -> next;
            /*current -> next -> next -> previous = current;
            current -> next = current -> next -> next;*/

            current -> next = NULL;

            cout<<"Element deleted!" <<endl;

            free(temp);

            return;

        }

        /*current = current -> next*/;


    

    

    cout<<"Element "<< value << " not found!" <<endl;
}
//void DoubleLinkedList::search_value(int value);
//void DoubleLinkedList::display_iist();
//void DoubleLinkedList::list_length();
//void DoubleLinkedList::reverse_list();
