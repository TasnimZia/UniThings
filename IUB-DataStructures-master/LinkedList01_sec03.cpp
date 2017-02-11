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
    void displayList()
    {
        cout<<"Linked List Values:"<<endl;
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



};

int main()
{
LinkedList obj;
for(int i=0;i<5;i++)
obj.appendNode((i+1)*100);
obj.revDisplayList();
//obj.revDisplayList();
//obj.displayList();



return 0;
}
