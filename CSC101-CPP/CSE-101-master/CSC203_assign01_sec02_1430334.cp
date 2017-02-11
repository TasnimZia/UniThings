#include <iostream>
#include <cstdlib>

using namespace std;

class compNum {
	int realNum;
	int imagNum;

	public:
		compNum (){
			realNum = 0;
			imagNum = 0;
		}
		void setVal(int, int);

		void getVal(int &r, int &i){
			r= realNum;
			i= imagNum;
		}
		void display(){
			cout << realNum << " + " << imagNum << 'i'<< endl;
		}
		compNum addComp(compNum x){
			compNum t;
			int y,z;
			x.getVal (y,z);
			//realNum += y;
			//imagNum += z;
			t.setVal(realNum+y, imagNum+z);
			return t;

		}
};

void compNum :: setVal (int r, int i) {
	realNum = r;
	imagNum = i;
};

class node {
compNum data;
node *next;
node *prev;

public:
	compNum addList(node *t){	//Will pass head to t
		compNum x;    // X will get heads complex number values
		while (t!=NULL){
            x = x.addComp(t->data);
            t=t->next;
		}
		return x;
	}
    void addNodeFront(node*& h, node*& t) {
        node *temp;
        if(h==NULL)
        {
            h=new node;
            h->data.setVal(rand()%100,rand()%100);
            h->next=NULL;
			h->prev=NULL;
            t=h;
        }
        else{
            temp=h;
            h=new node;
            h->data.setVal(rand()%100,rand()%100);
            h->next=temp;
			temp->prev=h;
			h->prev=NULL;
        }
    }
    void insertAtEnd(node*& h, node*& t){
        if(h==NULL){
            h=new node;
            h->data.setVal(rand()%100,rand()%100);
            h->next=NULL;
			h->prev=NULL;
            t=h;
        }
        else{
            t->next = new node;
			t->next->prev=t;		//new nodes prev pointing to whatever t is pointing to
            t = t->next;
            t->data.setVal(rand()%100,rand()%100);
            t->next=NULL;
        }
    }
	 void insertAtPos(node*& h, node*& t){
        int pos,n=0; node *c, *temp;
        cout<<"Enter a position where new node to be inserted: ";
        cin>>pos;
        c=h;
        while(c != NULL){
            n++; c=c->next;
        }
        if(pos>n || pos<0){
            cout<<"Invalid position!!!"; return;
        }
        else if(pos==0 && n==0){
            h=new node;
            h->data.setVal(rand()%100,rand()%100);
            h->next=NULL;
			h->prev=NULL;
            t=h;
        }
        else if(pos==0){
            temp=h;
            h=new node;
            h->data.setVal(rand()%100,rand()%100);
            h->next=temp;
			temp->prev=h;
			h->prev=NULL;
        }
        else{
            c=h;
            for(int i=1;i<pos;i++) c=c->next;
            temp = c->next;
            c->next=new node;
			c->next->prev=c;
            c=c->next;
            c->data.setVal(rand()%100,rand()%100);
            c->next=temp;
				if (temp!=NULL){		//if not last node, update last nodes prev
					temp->prev=c;
				}
        }
    }

	void deleteFromBeginning(node*& h, node*& t){
        node* c;
        if(h==NULL){
            cout<<"Oops! The list is empty..."<<endl;
        }
        else if(h==t){
            delete h; h=t=NULL;
        }
        else{
            c=h;
            h = h->next;
			h-> prev = NULL;
            delete c;
        }
    }

	void deleteLast(node*& h, node*& t){
        node* c;
        if(h==NULL){
            cout<<"Oops! The list is empty..."<<endl;
        }
        else if(h==t){
            delete h; h=t=NULL;
        }
        else{
            c=h;
            while(c->next->next != NULL){
                c = c->next;
            }
            delete c->next;
            c->next=NULL;
            t = c;
        }
    }

	void deletePos(node *&h, node *&t){
		int pos,n=0; node *c, *temp;
        cout<< "Enter a position to be Deleted: ";
        cin>>pos;
        c=h;
        while(c != NULL){
            n++; c=c->next;
        }
        if(pos>n || pos<0 || pos==0){
            cout<<"Invalid position!!!"; return;
        }
		else if(n==0)   	{//0 nodes
			cout <<"List Empty!!!";
        }
		else if(pos==1){
            temp=h;
			h=h->next;
			h->prev=NULL;			//First node, so previou's last node
			delete temp;
			if (n==1) t=h; 		//updated tail if only 1 node list
        }
		else{
            c=temp=h;
            for(int i=1;i<pos;i++) {
				temp=c;
				c=c->next;
			}
            temp->next=c->next;
			temp->prev=c->prev;
			delete c;
			if (pos==n)			//updating tail if last node
				t=temp;
        }
	}

	void sortNodes(node *&head){
		node *p1,*p2;
		p1= new node;
		p2= new node;
		compNum temp;
		int r1,r2,i1,i2;
			for (p1=head;p1!=NULL;p1=p1->next){
                p1->data.getVal(r1,i1);
				for (p2=head;p2!=NULL;p2=p2->next){
					p2->data.getVal(r2,i2);
					//cout << r1<<r2<<i1<<i2;
                    if (r1>r2){
						temp=p1->data;
						p1->data=p2->data;
						p2->data=temp;
					}
					else if (r1==r2){
						if (i1>i2){
							temp=p1->data;
							p1->data=p2->data;
							p2->data=temp;
						}
					}
				}
			}


	}

    void displayNode (node *h){
        if (h==NULL) cout << "List is empty! ";
        else {
            while (h != NULL){
				h->data.display();
				h=h->next;
			}
        }
    }
	void dispRevRec(node *p){
		if (p->next!=NULL)
			dispRevRec(p->next);
			p->data.display();cout << " ";
	}
};

int main() {

	node ob;
    node *head, *tail;
    head=tail=NULL; int ch;

    do
    {
        cout<<"Enter [1] to create a node at the beginning of the list."<<endl;
        cout<<"Enter [2] to create a node at the end of the list."<<endl;
        cout<<"Enter [3] to insert a node at a position."<<endl;
        cout<<"Enter [4] to delete the first node from the list."<<endl;
        cout<<"Enter [5] to delete the last node from the list."<<endl;
        cout<<"Enter [6] to delete a node from a position."<<endl;
        cout<<"Enter [7] to check whether a data exist in the list."<<endl;
        cout<<"Enter [8] to display the list."<<endl;
		cout<<"Enter [9] to Display reverse"<<endl;
		cout<<"Enter [10] to Add ALL complex numbers in list"<<endl;
		cout<<"Enter [11] to Sort by Real val, Imaginary val"<<endl;
        cout<<"Enter [12] to exit."<<endl;
        cout<<"Enter your choice..."; cin>>ch;

        switch(ch)
        {
            case 1: ob.addNodeFront(head, tail); break;
            case 2: ob.insertAtEnd(head, tail); break;
            case 3: ob.insertAtPos(head, tail); break;
            case 4: ob.deleteFromBeginning(head, tail); break;
            case 5: ob.deleteLast(head, tail); break;
            case 6: ob.deletePos(head, tail); break;
        //    case 7: ob.checkNode(head); break;
            case 8: ob.displayNode(head); break;

			case 9: ob.dispRevRec(head);break;
			case 10: cout << "Total : "; ob.addList(head).display();break;
			case 11: ob.sortNodes(head);break;
        }
    }while (ch != 12);

	return 0;
}
