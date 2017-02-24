#include <iostream>

using namespace std;


class Link
{
public:
    int Data;
    Link * pointer_to_next_link;

    Link * pointer_to_previous_link;

    int pos;


    Link (int d) : Data(d), pointer_to_next_link(NULL), pointer_to_previous_link(NULL)
    {

    }

    void display_link()
    {
        cout<<"This Link contains: " << Data <<". " <<endl;
    }

};


class DoublyLinkedList
{
private:
    Link* pointer_to_first_link;
    Link* pointer_to_last_link;
    int position = 0;

public:
    DoublyLinkedList() : pointer_to_first_link(NULL), pointer_to_last_link(NULL), position(position++)
    {

    }

    ~DoublyLinkedList()
{
    Link* pointer_to_current_link = pointer_to_first_link;

    while(pointer_to_current_link != NULL)
    {
        Link* temporary_link_pointer = pointer_to_current_link;

        pointer_to_current_link = pointer_to_current_link -> pointer_to_next_link;

        delete temporary_link_pointer;
    }

    pointer_to_first_link = NULL;

}


bool list_is_empty()
{
    return pointer_to_first_link==NULL;
}


void append_to_list(int d)
{
        Link* pointer_to_new_link = new Link(d);

        pointer_to_new_link -> pointer_to_next_link = NULL;
        pointer_to_new_link -> pointer_to_previous_link = NULL;


        if( list_is_empty() )
        {
            pointer_to_first_link = pointer_to_new_link;
            pointer_to_last_link = pointer_to_new_link;
        }
        else
        {
              pointer_to_last_link ->pointer_to_next_link = pointer_to_new_link;
              pointer_to_new_link -> pointer_to_previous_link = pointer_to_last_link;
              pointer_to_last_link = pointer_to_last_link -> pointer_to_next_link;

        }

//          pointer_to_last_link = pointer_to_new_link;

}


void display_list()
{
        cout << "Linked List (First -> Last): "<<endl;
        Link * pointer_to_current_link = pointer_to_first_link;

        while(pointer_to_current_link != NULL)
        {
            pointer_to_current_link -> display_link();

            pointer_to_current_link = pointer_to_current_link -> pointer_to_next_link;
        }

        cout << endl;
}


void display_pos()
{
            cout<<(position);
}

};

int main()
{
            DoublyLinkedList * a = new DoublyLinkedList();

            a.append_first_my_way(2);
            return 0;
}
