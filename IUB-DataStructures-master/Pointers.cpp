#include <iostream>

#include <typeinfo>


using namespace std;



void doSomething(int *ptr)
{
    if (ptr)
        std::cout << "You passed in " << *ptr << '\n';
    else
        std::cout << "You passed in a null pointer\n";
}






//    struct node
//    {
//        string song;
//
//        string artist;
//
//        node *next_node;
//
//    };
//
//
//
//    class Linked_List
//    {
//        private:
//            node * head;
//            int list_length;
//
//        public:
//            Linked_List()
//            {
//                head -> song = "head: contains no song data";
//
//            }
//
//
//            bool insert_node(node * new_node, int position);
//
//            bool remove_node(int position);
//
//            void print_list();
//
//            ~Linked_List();
//
//    };





//class Node
//{
//    private:
//        string name;
//        int age,ID;
//        double GPA;
//        Node *next;
//
//    public:
//        Node(string&,int&,int&,double&);
//
//};
//
//
//
//class Folder
//{
//private:
//    Node * root;
//
//public:
//    Folder();
//
//    void addNode(string&,int&,int&,double&);
//
//    void traverseList();
//};






struct node
  {
    int data;
    node *next;
  };


class list
  {
    private:
    node *head, *tail;
    public:
    list()
    {
      head=NULL;
      tail=NULL;
    }
  };



int main()
{
//    int x = 5;
//    std::cout << x << '\n'; // print the value of variable x
//    std::cout << &x << '\n'; // print the memory address of variable x
//
//    std::cout << *&x << '\n'; /// print the value at the memory address of variable x
//
//
//
//    int *iPtr; // a pointer to an integer value
//    double *dPtr; // a pointer to a double value
//
//    int* iPtr2; // also valid syntax (acceptable, but not favored)
//    int * iPtr3; // also valid syntax (but don't do this)
//
//    int *iPtr4, *iPtr5; // declare two pointers to integer variables
//
//
//
//    int* doSomething();
//
//
//
//    int value = 5;
//    int *ptr = &value; // initialize ptr with address of variable value
//
//
//    std::cout << &value << '\n'; // print the address of variable value
//    std::cout << ptr << '\n'; // print the address that ptr is holding



//    int x(4);
//
//	std::cout << typeid(&x).name();
//
//	cout<<endl<<x;




//	int value = 5;
//    std::cout << &value<<endl; // prints address of value
//    std::cout << value; // prints contents of value
//
//    int *ptr = &value; // ptr points to value
//    std::cout << ptr<<endl; // prints address held in ptr, which is &value
//    std::cout << *ptr<<endl; // dereference ptr (get the value that ptr is pointing to)


//
//    int value1 = 5;
//    int value2 = 7;
//
//    int *ptr;
//
//    ptr = &value1; // ptr points to value1
//    std::cout << *ptr<<"\n"; // prints 5
//
//    ptr = &value2; // ptr now points to value2
//    std::cout << *ptr; // prints 7
//



//    int value = 5;
//    int *ptr = &value; // ptr points to value
//
//    *ptr = 7; // *ptr is the same as value, which is assigned 7
//    std::cout << value; // prints 7





//
//    int *ptr(0);  // ptr is now a null pointer
//
//    int *ptr2; // ptr2 is uninitialized
//    ptr2 = 0; // ptr2 is now a null pointer





//    double *ptr(0);
//
//    if (ptr)
//        cout << "ptr is pointing to a double value.";
//    else
//        cout << "ptr is a null pointer." << " "  ;






//    doSomething(NULL); // the argument is definitely a null pointer (not an integer)




//    int array[5] = { 9, 7, 5, 3, 1 };
//
//    // print the value of the array variable
//    std::cout << "The array has address: " << array << '\n';
//
//    // print address of the array elements
//    std::cout << "Element 0 has address: " << &array[0] << '\n';
//
//    cout<< *(array+2);



//    int array[5] = { 9, 7, 5, 3, 1 };
//
//    // dereferencing an array returns the first element (element 0)
//    cout << *array<<endl; // will print 9!
//
//    char name[] = "Jason"; // C-style string (also an array)
//    cout << *name; // will print 'J'




//        int array[5] = { 9, 7, 5, 3, 1 };
//        std::cout << *array; // will print 9
//
//        int *ptr = array;
//        std::cout << *ptr; // will print 9




//        int array[5] = { 9, 7, 5, 3, 1 };
//
//        std::cout << sizeof(array) << '\n'; // will print sizeof(int) * array length
//
//        int *ptr = array;
//        std::cout << sizeof(ptr) << '\n'; // will print the size of a pointer





//        int value = 7;
//        int *ptr = &value;
//
//        std::cout << ptr << '\n';
//        std::cout << ptr+1 << '\n';
//        std::cout << ptr+2 << '\n';
//        std::cout << ptr+3 << '\n';





//      int a = 50;       // initialize integer variable a
//      cout<<"The value of 'a': "<<a<<endl; // show the output of a
//
//      int * b;          // declare an integer pointer b
//      b = &a;           // transfer the address of 'a' to pointer 'b'
//      *b = 100;         // change the value of 'a' using pointer 'b'
//      cout<<"The value of 'a' using *b: "<<a<<endl;// show the output of a
//
//      int **c;          // declare an integer pointer to pointer 'c'
//      c = &b;           // transfer the address of 'b' to pointer to pointer 'c'
//      **c = 200;        // change the value of 'a' using pointer to pointer 'c'
//      cout<<"The value of 'a' using **c: "<<a<<endl;// show the output of a





//      int a = 50;       // initialize integer variable a
//      cout<<"Value of 'a' = "<<a<<endl;          // show the output of a
//      cout<<"Memory address of 'a': "<<&a<<endl; // show the address of a
//      cout<<endl;
//
//      int * b;             // declare an integer pointer b
//      b = &a;              // transfer the address of 'a' to pointer 'b'
//      cout<<"Value of Pointer 'b': "<<*b<<endl;  // show the output of *b
//      cout<<"Content of Pointer 'b': "<<b<<endl; // show the content of *b
//      cout<<"Memory address of Pointer 'b': "<<&b<<endl; // show the address of *b
//      cout<<endl;
//
//      int **c;                // declare an integer pointer to a pointer
//      c = &b;                 // transfer the address of 'b' to 'c'
//      cout<<"Value of Pointer 'c': "<<**c<<endl; // show the output of **c
//      cout<<"Content of Pointer 'c': "<<c<<endl;  // show the content of **c
//      cout<<"Memory address of Pointer 'c': "<<&c<<endl; // show the address of **c
//      cout<<endl;






    return 0;
}
