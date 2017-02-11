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

        void display_list()
        {
            cout << "Linked List (First Node-->Last Node): ";
            Link* current_link_pointer = pointer_to_first_link; //start at beginning of list
            while(current_link_pointer != NULL) //iterate til the end of list,
            {
            current_link_pointer->displayLink(); //print data in every link
            current_link_pointer = current_link_pointer->pointer_to_next_link; //move to next link
            }
            cout << endl;
        }
//-------------------------------------------------------------

};

/* ************************************************************************** */

int main()
{
    LinkList test_list; //make new link list
    test_list.insert_at_first(1, 1.1); //insert four items each appending to the first
    test_list.insert_at_first(2, 2.2);
    test_list.insert_at_first(3, 3.3);
    test_list.insert_at_first(4, 4.4);
    test_list.display_list(); //view the list f 2 l

//    bool temp = true;
//
//    cout<<"Please enter
//    while(temp)
//    {
//
//    }

    return 0;
}

/* ************************************************************************** */
