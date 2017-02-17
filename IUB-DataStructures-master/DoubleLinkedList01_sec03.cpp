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

    void searchAndInsert(float sVal, float insVal)
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


obj.searchAndInsert(19,100);
obj.displayList();
obj.revDisplayList();

return 0;
}
