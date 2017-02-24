#include<iostream>
#include<cstdlib>

using namespace std;

class DoubleLinkedList{

struct DoubleListNode{
float value;
struct DoubleListNode *next;
struct DoubleListNode *prev;
};
DoubleListNode *Head;
DoubleListNode *Tail;


public:
    DoubleLinkedList()
    {
        Head=Tail=NULL;
    }
    ~DoubleLinkedList()
    {
        DoubleListNode *nodePtr, *dPtr;
        nodePtr=Head;
        while(nodePtr!=NULL)
        {
            dPtr=nodePtr;
            nodePtr=nodePtr->next;
            delete dPtr;
        }
        Head=NULL;
    }
    void appendNode(float num)
    {
        DoubleListNode *newNode;
        newNode=new DoubleListNode;
        newNode->value=num;
        newNode->next=NULL;
        newNode->prev=NULL;
        if(Head==NULL)
        {
            Head=newNode;
            Tail=Head;
        }else{
        Tail->next=newNode;
        newNode->prev=Tail;
        Tail=Tail->next;
        }
    }

    void searchAndInsertPrev(float sVal, float insVal)
    {
        DoubleListNode *nodePtr;
        nodePtr=Head;
        while(nodePtr!=NULL)
        {
            if(sVal==nodePtr->value) break;
            nodePtr=nodePtr->next;
        }
        if(nodePtr!=NULL){
            DoubleListNode *newNode;
            newNode=new DoubleListNode;
            newNode->value=insVal;
            //newNode->next=NULL;
            //newNode->prev=NULL;

            newNode->next=nodePtr;
            newNode->prev=nodePtr->prev;
            if(nodePtr==Head){
               nodePtr->prev=newNode;
               Head=Head->prev;
            }else{
            nodePtr->prev->next=newNode;
            nodePtr->prev=newNode;

            }

        }else{
        cout<<"Search value not Found"<<endl;
        }
    }

    int searchAndInsertNext(float sVal, float insVal)
    {
        DoubleListNode *nodePtr;
        nodePtr=Head;
        while(nodePtr!=NULL)
        {
            if(sVal==nodePtr->value) break;
            nodePtr=nodePtr->next;
        }
        if(nodePtr!=NULL){
            DoubleListNode *newNode;
            newNode=new DoubleListNode;
            newNode->value=insVal;
            //newNode->next=NULL;
            //newNode->prev=NULL;

            newNode->next=nodePtr->next;
            newNode->prev=nodePtr;
            if(nodePtr==Tail){
               nodePtr->next=newNode;
               Tail=Tail->next;
            }else{
            nodePtr->next->prev=newNode;
            nodePtr->next=newNode;

            }

        }else{
        cout<<"Search value not Found"<<endl;
        return 0;
        }
    return 1;
    }


    void searchAndInsertPrevAndNext(float sVal, float insVal)
    {
        if(searchAndInsertNext(sVal,insVal)==1)
        searchAndInsertPrev(sVal,insVal);
    }

    void displayList()
    {
        cout<<"\nLinked List Values:"<<endl;
        DoubleListNode *nodePtr;
        nodePtr=Head;
        cout<<"NULL<->";
        while(nodePtr!=NULL)
        {
            cout<<nodePtr->value<<"<->";
            nodePtr=nodePtr->next;
        }
        cout<<"NULL\n";
    }


    void revDisplayList()
    {
        cout<<"\nLinked List Values in reverse order:"<<endl;
        DoubleListNode *nodePtr;
        nodePtr=Tail;
        cout<<"NULL<->";
        while(nodePtr!=NULL)
        {
            cout<<nodePtr->value<<"<->";
            nodePtr=nodePtr->prev;
        }
        cout<<"NULL\n";

    }
    void searchAndDelete(int sVal)
    {
        DoubleListNode *nodePtr;
        nodePtr=Head;
        while(nodePtr!=NULL)
        {
            if(sVal==nodePtr->value) break;
            nodePtr=nodePtr->next;
        }
        if(nodePtr!=NULL){
            if(nodePtr==Head)
            {
                Head=Head->next;
                Head->prev=NULL;
                delete nodePtr;
            }else if(nodePtr==Tail)
            {
                Tail=Tail->prev;
                Tail->next=NULL;
                delete nodePtr;
            }
            else{
                nodePtr->prev->next=nodePtr->next;
                nodePtr->next->prev=nodePtr->prev;
                delete nodePtr;
            }
        }else{
        cout<<"Search value not Found"<<endl;
        }
    }


    void search_multiples()
    {
        DoubleListNode * nodePointer = Head;

        while(nodePointer != NULL)
        {

        }


    }



};

int main()
{
DoubleLinkedList obj;

obj.appendNode(1);
obj.appendNode(2);
obj.appendNode(3);
obj.appendNode(4);
obj.appendNode(5);
obj.appendNode(6);
obj.appendNode(7);
obj.appendNode(8);
obj.displayList();
obj.revDisplayList();


obj.searchAndDelete(5);
//obj.searchAndInsertPrevAndNext(5,100);
//obj.searchAndInsertNext(5,100);
//obj.searchAndInsertPrev(5,100);
obj.displayList();
obj.revDisplayList();

return 0;
}
