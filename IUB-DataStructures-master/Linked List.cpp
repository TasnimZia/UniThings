#include <iostream>

using namespace std;
//class Link
//{
//public:
//int Data; //data
//double More_Accurate_Data; //data
//Link* pointer_to_next_link; //pointer to next link
//};


//class Link
//{
//public:
//inventoryItem* pItem; //pointer to object holding data
//Link* pointer_to_next_link; //pointer to next link
//};


//class Link
//{
//    public:
//        int information; //data
//        double more_information; //data
//        Link* pointer_to_next_link; //what he said
//
//
//    Link (int info, double more_info):
//        information(info), more_information(more_info), pointer_to_next_link(NULL)
//        { }
//
//
//    void display_link()
//    {
//        cout<<"Link Data: "<< information << ", More Precisely: " << more_information <<".";
//    }
//
//
//};
//
//
//class LinkedList
//{
//    private:
//        Link* pointer_to_first_link;
//
//    public:
//        LinkedList() : pointer_to_first_link(NULL)
//        {
//
//        }
//
//        bool list_is_empty()
//        {
//            return (pointer_to_first_link == NULL);
//        }
//
//
//        //insert at start of list
//        void insert_at_first(int id, double dd)
//        { //make new link
//            Link* pointer_to_new_link = new Link(id, dd);
//            pointer_to_new_link->pointer_to_next_link = pointer_to_first_link; //newLink-->old first
//            pointer_to_first_link = pointer_to_new_link; //first-->newLink
//        }
//
//        void remove_first_element_in_list() //delete first link
//        { //(assumes list not empty)
//            Link* temporary_pointer = pointer_to_first_link; //save first
//            pointer_to_first_link = pointer_to_first_link->pointer_to_next_link; //unlink it: first-->old next
//            delete temporary_pointer; //delete old first
//        }
//
//        void display_list()
//        {
//            cout << “List (first-->last): “;
//            Link* current_link_pointer = pointer_to_first_link; //start at beginning of list
//            while(current_link_pointer != NULL) //until end of list,
//            {
//            current_link_pointer->displayLink(); //print data
//            current_link_pointer = current_link_pointer->pointer_to_next_link; //move to next link
//            }
//            cout << endl;
//        }
//
//};
//
//int main()
//{
//    return 0;
//}



#include <iostream>

using namespace std;

/* ************************************************************************** */

class Link      //each of the data structure objects
{
    public:
        int Data; //each Link holds 2 types of data
        double More_Accurate_Data;      //One int, one float
        Link* pointer_to_next_link; //this is a pointer which points to the next link


        Link(int data, double another_data) : //constructor given - every link will be created with data and another_data
            Data(data), More_Accurate_Data(another_data), pointer_to_next_link(NULL)    //the pointer to the next link will be null
            {

            }


        void displayLink() //prints out the link
        {
            cout << "{" << Data << ", " << More_Accurate_Data << "} ";
        }

};

/* ************************************************************************** */



class LinkList  //list - where the fun begins
{
    private:
        Link* pointer_to_first_link; //this points to first link on list - keeps head fixed - private

    public:
        LinkList() : pointer_to_first_link(NULL) //constructor - whenever list created, first link pointer is null, cause no items in list
        { }
/* ************************************************************************** */
        bool list_is_Empty() //sanity check for empty list
        {
            return (pointer_to_first_link == NULL);
        }
/* ************************************************************************** */

        void insert_at_first(int data, double more_data)
        { //first make new link, and make the pointer point to it
            Link* pointer_to_new_link = new Link(data, more_data);

            pointer_to_new_link->pointer_to_next_link = pointer_to_first_link;

            pointer_to_first_link = pointer_to_new_link; //new link is made first by pointer pointing to it
        }
/* ************************************************************************** */
        Link* get_first_element_in_list() //return first link
        { return pointer_to_first_link; }
        //-------------------------------------------------------------
        void remove_first_element_in_list() //delete first link
        { //(assumes list not empty)
            Link* temporary_pointer = pointer_to_first_link; //save first
            pointer_to_first_link = pointer_to_first_link->pointer_to_next_link; //unlink it: first-->old next
            delete temporary_pointer; //delete old first
        }
        //-------------------------------------------------------------
        void display_list()
        {
            cout << "List (first-->last): ";
            Link* current_link_pointer = pointer_to_first_link; //start at beginning of list
            while(current_link_pointer != NULL) //until end of list,
            {
            current_link_pointer->displayLink(); //print data
            current_link_pointer = current_link_pointer->pointer_to_next_link; //move to next link
            }
            cout << endl;
        }
//-------------------------------------------------------------

}; //end class LinkList

////////////////////////////////////////////////////////////////

int main()
{
    LinkList test_list; //make new list
    test_list.insert_at_first(22, 2.99); //insert four items
    test_list.insert_at_first(44, 4.99);
    test_list.insert_at_first(66, 6.99);
    test_list.insert_at_first(88, 8.99);
    test_list.display_list(); //display list

    while( !test_list.list_is_Empty() ) //until it’s empty,
    {
        Link* temporary_pointer = test_list.get_first_element_in_list(); //get first link
        //display its key
        cout << "Removing link with key " << temporary_pointer->Data << endl;
        test_list.remove_first_element_in_list(); //remove it
    }

    test_list.display_list(); //display empty list

    return 0;
} //end main()
