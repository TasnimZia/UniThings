#include <iostream>

using namespace std;


class Link
{
public:
    int Data;
    Link * pointer_to_next_link;

    Link * pointer_to_previous_link;


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

public:
    DoublyLinkedList() : pointer_to_first_link(NULL), pointer_to_last_link(NULL)
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


//void search_and_insert_last(int search_value, int value)
void search_and_insert_last(int search_value, int value)
{
        Link * current_link_pointer = pointer_to_first_link ;

        Link * pointer_to_matching_link;


        bool found = false;

        while (current_link_pointer != NULL)
        {
            if (current_link_pointer -> Data == value)
            {
                cout<<"found"<<endl;

                pointer_to_matching_link = current_link_pointer;

                found = true;

                break;
            }
            else
            {
    //            cout<<"not found"<<endl;

                current_link_pointer = current_link_pointer -> pointer_to_next_link;

    //            break;
            }

        }

        if (found)
        {
            pointer_to_matching_link -> display_link();

        }
        else
            cout<<"Not found";


}



void search_and_insert_before(int search_value, int value)
{
            Link * current_link_pointer;
            current_link_pointer = pointer_to_first_link;

            while(current_link_pointer != NULL)
            {
                if(search_value == current_link_pointer -> Data) break;
                current_link_pointer = current_link_pointer -> pointer_to_next_link;
            }


            if(current_link_pointer != NULL)
                {
                    Link * new_link = new Link(value);

                    new_link -> pointer_to_next_link = current_link_pointer;
                    new_link -> pointer_to_previous_link = current_link_pointer ->pointer_to_previous_link;

                    if(current_link_pointer == pointer_to_first_link)
                        {
                           current_link_pointer -> pointer_to_previous_link = new_link;
                           pointer_to_first_link = pointer_to_first_link -> pointer_to_previous_link;
                    }
                    else
                        {
                            current_link_pointer -> pointer_to_previous_link -> pointer_to_next_link =new_link;
                            current_link_pointer -> pointer_to_previous_link = new_link;
                        }

            }
            else{
            cout<<"Search value not Found"<<endl;
            }
    }


    Link * search_for_value(int value)
    {
                Link * current_link_pointer = pointer_to_first_link;

                while (current_link_pointer != NULL)
                {
                            if (current_link_pointer -> Data == value)
                            {
                                        return current_link_pointer;
                            }

                            current_link_pointer = current_link_pointer -> pointer_to_next_link;

                }

                return NULL;

    }


    void append_first_my_way(int value)
    {
        Link * current_link_pointer = pointer_to_first_link;

        Link * new_link = new Link(value);

        if (current_link_pointer == NULL)
        {
            new_link -> pointer_to_next_link = NULL;
            pointer_to_first_link = new_link;
            return;
        }
    }


};



int main()
{
        DoublyLinkedList test_list;

        test_list.append_first_my_way(333);
        test_list.append_to_list(5);
        test_list.append_to_list(6);
        test_list.append_to_list(7);
        test_list.display_list();
    //    test_list.search_and_insert_first(23);
        cout<<test_list.search_for_value(6);



        return 0;

}
