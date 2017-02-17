#include <iostream>

using namespace std;


class Link
{
        public:
                    int Data;
                    int More_Data;
                    Link * pointer_to_next_Link;

                    Link (int id, int value):
                        Data(id), More_Data(value), pointer_to_next_Link(NULL)
                        {

                        }

                    void display_link()
                    {
                        cout<<"Current Link's Data: " << Data << " And ID " << More_Data << ". " <<endl;
                    }


};



class LinkedList
{
    private:
        Link * pointer_to_first_Link;
        Link * pointer_to_last_link;

    public:
        LinkedList() : pointer_to_first_Link(NULL), pointer_to_last_link(NULL)
        {

        }

        bool list_is_empty()
        {
            return (pointer_to_first_Link == NULL);
        };


        void insert_at_first_of_linked_list(int data, int more_data)
        {
            Link * pointer_to_new_Link = new Link(data, more_data);

            pointer_to_new_Link -> pointer_to_next_Link = pointer_to_first_Link;

            pointer_to_first_Link = pointer_to_new_Link;
        }


        void insert_at_last(int data, int more_data) //insert at end of list
        {
                Link* pointer_to_new_link = new Link(data, more_data); //make new link
                if( list_is_empty() ) //if empty list,
                    pointer_to_first_Link = pointer_to_new_link; //first --> newLink
                else
                    pointer_to_last_link ->pointer_to_next_Link = pointer_to_new_link; //old last --> newLink
                pointer_to_last_link = pointer_to_new_link; //newLink <-- last
        }

        void display_linked_list()
        {
            cout<<"Displaying Linked List (First to Last): "<<endl;

            Link * current_link_pointer = pointer_to_first_Link;

            while (current_link_pointer != NULL)
            {
                current_link_pointer->display_link();
                current_link_pointer = current_link_pointer -> pointer_to_next_Link;
            }
            cout<<endl;
        }

        Link * get_first()
        {
            return (pointer_to_first_Link);
        }


        void remove_first_link_in_list()
        {
//            if (LinkedList.list_is_empty())
//            {
//                return;
//            }
            if ( pointer_to_first_Link == NULL)
            {
                cout<<"List is empty dude!" <<endl;

                return;
            }

            Link * pointer_to_current_link = pointer_to_first_Link;
            pointer_to_first_Link = pointer_to_first_Link -> pointer_to_next_Link;
            pointer_to_current_link = NULL;
            delete pointer_to_current_link;
        }
};



int main()
{
        Link test_link(1, 123);

//        Link test_link();

        test_link.display_link();

        LinkedList a;

        a.remove_first_link_in_list();

        a.remove_first_link_in_list();

        a.insert_at_first_of_linked_list(1, 1);
        a.insert_at_first_of_linked_list(2, 2);
        a.insert_at_first_of_linked_list(3, 3);

        a.display_linked_list();

        a.remove_first_link_in_list();

        a.display_linked_list();

//        if (a.list_is_empty())
//        {
//            cout<<endl<<"yupp";
//        };

        while ( !a.list_is_empty())
        {
            Link * temporary_link = a.get_first();

//            cout<< "Removing link with values : " << temporary_link-> get<<endl;
            a.remove_first_link_in_list();

        }
            a.display_linked_list();

            cout<<endl<<endl;

            LinkedList test = new LinkedList();

            a.insert_at_last(2, 4);

            a.display_linked_list();

    return 0;
}
