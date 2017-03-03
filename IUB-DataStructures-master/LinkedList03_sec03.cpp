#include<iostream>
#include<cstdlib>

using namespace std;

class LinkedList{

struct ListNode{
float value;
struct ListNode *next;
};
ListNode *Head;

public:
    LinkedList()
    {
        Head=NULL;
    }
    ~LinkedList()
    {
        ListNode *nodePtr, *dPtr;
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
        //create a new node and allocate memory
        ListNode *newNode, *nodePtr;
        newNode=new ListNode;
        newNode->value=num;
        newNode->next=NULL;

        if(Head==NULL){
            Head=newNode;
        }else{
            nodePtr=Head;
            while(nodePtr->next!=NULL)
            {
                nodePtr=nodePtr->next;
            }
            nodePtr->next=newNode;
        }
    }
    void sortedInsertNode(float num)
    {
        //create a new node and allocate memory
        ListNode *newNode, *nodePtr, *prevNode;
        newNode=new ListNode;
        newNode->value=num;
        newNode->next=NULL;

        if(Head==NULL){
            Head=newNode;
        }else{
            nodePtr=Head;
            prevNode=NULL;
            while(nodePtr!=NULL&&nodePtr->value<num)
            {
                prevNode=nodePtr;
                nodePtr=nodePtr->next;
            }
            if(prevNode==NULL)
            {
                Head=newNode;
                Head->next=nodePtr;
            }else{
            newNode->next=nodePtr;
            prevNode->next=newNode;
            }
        }
    }
    void displayList()
    {
        cout<<"\nLinked List Values:"<<endl;
        ListNode *nodePtr;
        nodePtr=Head;
        while(nodePtr!=NULL)
        {
            cout<<nodePtr->value<<"->";
            nodePtr=nodePtr->next;
        }
        cout<<"NULL";
    }

    void revDisplay(ListNode *nodePtr)
    {
        if(nodePtr==NULL) return;
        cout<<nodePtr->value<<"->";
        revDisplay(nodePtr->next);

    }
    void revDisplayList()
    {
        revDisplay(Head);
        cout<<"NULL";
    }
    void deleteNode(int num)
    {
        ListNode *nodePtr, *prevNode;
        if(Head==NULL){
            cout<<"\nLinked List is empty.."<<endl;
            return;
        }
        if(Head->value==num)
        {
            nodePtr=Head;
            Head=Head->next;
            delete nodePtr;
        }
        else{
            prevNode=NULL;
            nodePtr=Head;
            while(nodePtr!=NULL&&nodePtr->value!=num)
            {
                prevNode=nodePtr;
                nodePtr=nodePtr->next;
            }

            if(nodePtr==NULL)
            {
                cout<<"\nValue Not found.."<<endl;
            }
            else{
            prevNode->next=nodePtr->next;
            delete nodePtr;
            }


        }
    }



};

int main()
{
LinkedList obj;
//for(int i=0;i<5;i++)
//obj.appendNode((i+1)*100);
//obj.revDisplayList();
//obj.revDisplayList();
/*obj.sortedInsertNode(100);
obj.sortedInsertNode(200);
obj.sortedInsertNode(200);
obj.sortedInsertNode(300);
obj.sortedInsertNode(1000);*/
obj.appendNode(100);
obj.appendNode(10);
obj.appendNode(300);
obj.appendNode(50);
obj.appendNode(10);
obj.appendNode(100);
obj.appendNode(1000);
obj.appendNode(101);
obj.displayList();

obj.deleteNode(101);
obj.displayList();



return 0;
}
