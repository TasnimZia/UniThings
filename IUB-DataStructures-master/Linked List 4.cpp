#include <iostream>

using namespace std;


class Link
{
public:
    int data;
    float more_data;
    Link * pointer_to_next_Link;

    Link(int a, float b) :
         data(a), more_data(b), pointer_to_next_Link(NULL)
    {
//        data = a;
//        more_data = b;
    }

    void display_Link()
    {
        cout<<"Information in this Link: " << data << ", " << more_data <<". "<<endl;
    }


};


class LinkedList
{
private:
    Link * pointer_to_first_Link;

public:
    LinkedList() : pointer_to_first_Link(NULL)
    {

    }

    ~LinkedList()
    {
        Link * current_link_pointer = pointer_to_first_Link;

        while (current_link_pointer != NULL)
        {
            Link * previous_link_pointer = current_link_pointer;
            current_link_pointer = current_link_pointer -> pointer_to_next_Link;
            delete previous_link_pointer;

        }
    }


    void insert_at_first(int d, float f)
    {
        Link * pointer_to_new_link = new Link(d, f);

        pointer_to_new_link -> pointer_to_next_Link = pointer_to_first_Link;

        pointer_to_first_Link = pointer_to_new_link;
    }


    bool list_is_empty()
    {
        return (pointer_to_first_Link == NULL);
    }


    Link * get_first_Link()
    {
        return (pointer_to_first_Link);
    }


    void remove_first_Link()
    {
        Link * temporary_Link_pointer = pointer_to_first_Link;

        pointer_to_first_Link = pointer_to_first_Link -> pointer_to_next_Link;

        temporary_Link_pointer = NULL;

        delete temporary_Link_pointer;
    }



    void display_linked_list()
    {
        cout<<"Linked List (First -> Last): ";

        Link * pointer_to_current_Link = pointer_to_first_Link;


        while (pointer_to_current_Link != NULL)
        {
            pointer_to_current_Link -> display_Link();

            pointer_to_current_Link = pointer_to_current_Link -> pointer_to_next_Link;

        }

        cout<<endl;

    }
};




int main()
{

    Link a(1, 1);

//    cout<<a.more_data;

//    a.display_link();

    LinkedList b;

    if (b.list_is_empty())
    {
//        cout<<"List is emptito." <<endl;
    };

//    b.display_linked_list();

    b.insert_at_first(1, 2);


    if (!b.list_is_empty())
    {
//        cout<<"List is not emptito." <<endl;
    };


//    b.display_linked_list();

    Link * c = b.get_first_Link();

//    c.display_link();

//    c -> display_link();

    b.remove_first_Link();

//    b.remove_first_Link();

//    b.remove_first_Link();

    b.get_first_Link();

    b.insert_at_first(2, 2);

    b.insert_at_first(3, 3);

    b.insert_at_first(4, 4);

    b.display_linked_list();



    return 0;
}
