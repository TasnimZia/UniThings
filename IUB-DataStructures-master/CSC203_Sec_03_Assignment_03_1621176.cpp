#include <iostream>

using namespace std;


class Link
{
public:
    int Data;
    Link * pointer_to_next_link;

    Link * pointer_to_previous_link;

    int pos = 0;


    Link (int d) : Data(d), pointer_to_next_link(NULL), pointer_to_previous_link(NULL)
    {
        pos = pos + 1;
    }

    void display_link()
    {
        cout<<"This Link contains: " << Data <<". " <<endl;
    }

    void display_pos()
    {
        cout<<"Link in position: " <<pos << ". " <<endl;
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

            position = position + 1;
        }
        else
        {
              pointer_to_last_link ->pointer_to_next_link = pointer_to_new_link;
              pointer_to_new_link -> pointer_to_previous_link = pointer_to_last_link;
              pointer_to_last_link = pointer_to_last_link -> pointer_to_next_link;

              position = position + 1;

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
            cout<<"The length of your list is: " <<(position) << endl;
}

int return_len()
{
    return position;
}


void search_and_disp(int value)
{
    Link * current = pointer_to_first_link;

    int curr_pos = 0;

    while (current != NULL)
    {
        curr_pos = curr_pos +1;

        if (current -> Data == value)
        {
            cout<<"Link Has Been Found At Position "<< curr_pos <<"." <<endl;
            break;
        }
        current = current -> pointer_to_next_link;

    }

    if (current == NULL)
    {
        cout<<"Link Not In List!" <<endl;
    }
}



int search_and_return(int value)
{
    Link * current = pointer_to_first_link;

    int curr_pos = 0;

    while (current != NULL)
    {
        curr_pos = curr_pos +1;

        if (current -> Data == value)
        {
//            cout<<"Link Has Been Found At Position "<< curr_pos <<"." <<endl;
            return curr_pos;
            break;
        }
        current = current -> pointer_to_next_link;

    }

    if (current == NULL)
    {
        cout<<"Link Not In List!" <<endl;
        return 0;
    }
}



void insert_at_pos(int pos, Link * inserable)
{
    int curr_pos = 0;

    Link * curr_link = pointer_to_first_link;


    while(true)
    {
         if (pos == 0)
        {
            insertable -> pointer_to_next_link = pointer_to_first_link;
            insertable -> pointer_to_previous_link = NULL;

            pointer_to_first_link -> pointer_to_previous_link = inserable;
            pointer_to_first_link = insertable;
            break;
        }
        else if(pos == position)
        {
            insertable -> pointer_to_next_link = pointer_to_last_link;
            insertable -> pointer_to_previous_link = pointer_to_last_link -> pointer_to_previous_link;

            pointer_to_last_link -> pointer_to_previous_link -> pointer_to_next_link = insertable;
            pointer_to_last_link -> pointer_to_previous_link = insertable;

            break;

        }

        else if (pos == curr_pos)
        {
            int counter = 0;

            for ()
        }


    }

}


void search_and_insert_before(int sVal, int insVal)
{
    pos = search_and_return(sVal);

    Link * insertable = new Link(insVal);

    insert_at_pos(pos,  inserable);

}


};






int main()
{
    Link * a = new Link(666);

    a -> display_link();

    Link * b = new Link(666);

    b -> display_pos();

    DoublyLinkedList * c = new DoublyLinkedList();

    c->append_to_list(1);
    c->append_to_list(2);
    c->append_to_list(3);

    c->display_pos();

    cout<<c -> return_len();

    c->search_and_disp(4);

//    cout<<c->search_and_return(4);

    return 0;
}
