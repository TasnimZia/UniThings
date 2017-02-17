#include <iostream>

using namespace std;


class Link
{
            public:
                        double dData; //data item
                        Link* pNext; //ptr to next link in list
                        //-------------------------------------------------------------

                        Link(double d) : dData(d), pNext(NULL) //constructor
                        { }
                        //-------------------------------------------------------------

                        void displayLink() //display this link
                        {
                            cout << dData << " ";
                        }
                        //-------------------------------------------------------------

}; //end class Link



class FirstLastList
{
            private:
                        Link* pFirst; //ptr to first link
                        Link* pLast; //ptr to last link
            public:
            //-------------------------------------------------------------
            FirstLastList() : pFirst(NULL), pLast(NULL) //constructor
            { }
//-------------------------------------------------------------
            ~FirstLastList() //destructor
            { // (deletes all links)
            Link* pCurrent = pFirst; //start at beginning

            while (pCurrent != NULL) //until end of list,
            {
                    Link* pTemp = pCurrent; //remember current
                    pCurrent = pCurrent->pNext; //move to next link
                    delete pTemp; //delete old current
            }

            }
//-------------------------------------------------------------
bool isEmpty() //true if no links
        {
                return pFirst==NULL;
        }
//-------------------------------------------------------------
void insertFirst(double dd) //insert at front of list
{
    Link* pNewLink = new Link(dd); //make new link

    if( isEmpty() ) //if empty list,
    {
        pLast = pNewLink; //newLink <-- last
    }

    pNewLink->pNext = pFirst; //nxewLink --> old first
    pFirst = pNewLink; //first --> newLink
}
//-------------------------------------------------------------
void insertLast(double dd) //insert at end of list
{
        Link* pNewLink = new Link(dd); //make new link

        if( isEmpty() ) //if empty list,
       {
            pFirst = pNewLink; //first --> newLink
       }
        else
        {
            pLast->pNext = pNewLink; //old last --> newLink
        }

        pLast = pNewLink; //newLink <-- last
}
//-------------------------------------------------------------

void removeFirst() //remove first link
{ //(assumes non-empty list)
        Link* pTemp = pFirst; //remember first link
        if(pFirst->pNext == NULL) //if only one item
        {
                pLast = NULL; //NULL <-- last
        }
        pFirst = pFirst->pNext; //first --> old next
        delete pTemp; //delete the link
}
//-------------------------------------------------------------
void displayList()
{
        cout << "List (first-->last):";
        Link* pCurrent = pFirst; //start at beginning

        while(pCurrent != NULL) //until end of list,
        {
                pCurrent->displayLink(); //print data
                pCurrent = pCurrent->pNext; //move to next link
        }
        cout << endl;

}

};



int main()
{
        FirstLastList theList; //make a new list
        theList.insertFirst(22); //insert at front
        theList.insertFirst(44);
        theList.insertFirst(66);
        theList.insertLast(11); //insert at rear
        theList.insertLast(33);
        theList.insertLast(55);
        theList.displayList(); //display the list
        cout << "Deleting first two item" << endl;
        theList.removeFirst(); //remove first two items
        theList.removeFirst();
        theList.displayList(); //display again
        return 0;
} //end main()
