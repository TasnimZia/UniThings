#include<iostream>
#include<cstdlib>
using namespace std;


class ArrayMedian
{
    int A[1000];
    int n;
    void bubbleSort()
    {
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=n-2;j>=i;j--)
            {
                if(A[j]>A[j+1])
                {
                    swap(A[j],A[j+1]);
                }
            }
        }
    }

    void sortArray()
    {
        int i,j;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(A[i]>A[j])
                {
                    swap(A[i],A[j]);
                }
            }
        }
    }
    void display()
    {
        int i;
        for(i=0;i<n;i++)
        {
            cout<<A[i]<<" ";
        }
    }
public:
    ArrayMedian()
    {
        int i;
        n=20;
        for(i=0; i<n; i++)
        {
            A[i]=rand();
        }
    }
    ArrayMedian(int size, int range)
    {
        int i;
        n=size;
        for(i=0; i<n; i++)
        {
            A[i]=rand()%(range+1);
        }
    }
    void findMedian()
    {
        bubbleSort();
        display();
        if(n%2==1){
            cout<<"median="<<A[n/2]<<endl;
        }else{
        cout<<"median="<<A[(n-1)/2]<<endl;
        }

    }


    void findMedian(int nm)
    {
        int i;
        display();
        bubbleSort();
        //display();
        if(n%2==1){
            cout<<"median(s)=";
            for(i=0;i<nm;i++)
            {
              cout<<A[n/2-nm/2+i]<<" ";
            }
            cout<<endl;
        }else{
            cout<<"median(s)=";
            for(i=0;i<nm;i++)
            {
              cout<<A[n/2-nm/2+i]<<" ";
            }
            cout<<endl;
        }

    }




};




int main()
{
    ArrayMedian obj; //initialize array with size 20
    ArrayMedian obj1(7,50); //initialize Array with size 10 and data range 0 to 50
    //obj1.findMedian(); //just the median
    obj1.findMedian(3); // middle 2 medians
}
