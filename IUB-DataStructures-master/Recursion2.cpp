#include <iostream>

using namespace std;


void displayStarDollarHash(int n)   //number of cycles to print
    {
        if(n==-1) return;   //base case = if n = -1 return and go back to upper levels
        displayStarDollarHash(n-1); //decrease n by 1 on each recursive call till it equals -1
        //cout<<n%3<<" ";
        if(n%3==0)  //first print star
        {
            cout<<"*";
            return; //then return
        }
        else if(n%3==1) //second print dollar
        {
            cout<<"$";
            return; //then return
        }
        else    //third print hash
        {
            cout<<"#";
            return; //then return
        }
    }


void display1234512345(int n)
    {
        if(n==-1)   //base case, if n = -1, return to upper levels
        {
            return;
        }

        display1234512345(n-1);     //if n != -1, call the same function recursively, deducting 1 from n, which will again check if = -1

        cout<<n%5+1<<" ";

        return;     //return shob shomoy dish, kaje dibe bhai
    }



    void display1toN(int n) //print list 1 to N
                            //since forward list, we have to print on the way back
    {
        if(n==0)    //base case, if n = 0, return to upper levels, 1 by 1
        {
            return;
        }

        display1toN(n-1);   //everytime recursively call the display function, decreasing 1 from n
        cout<<n<<" ";   //print n from the returning functions 1 2 3 4 5

        return; //fdpolis

    }


    void display_same_value(int n, int m)
    {
        if (n == 0)
        {
            return;
        }

        display_same_value(n - 1, m);
        cout<< m << " ";

        return;
    }





void display12471116(int n, int &m)
    {
        if(n==-1) return;
        display12471116(n-1,m);
        m=m+n;
        cout<<m<<" ";
    }



    void display12345(int n, int m)     //eida ki kore!
    {
        if(n==0) return;

        display12345(n-1,m);
        //display1toN(m);
        display_same_value(n,m-n+1);
        cout<<endl;
        //displaySameVal(m,n);
        //cout<<n<<" ";
    }



    void display_N_to_1(int n)  //print reverse series
    {
        if (n == 0) //base case :v
        {
            return;
        }
        cout<<n<<" ";   //on the forward trip, print n
        display_N_to_1(n - 1);  //recursively call fuct with 1 less n
    }


    void printSpace(int n)      //space for triangles
    {
        if(n==0) return;
        cout<<"  ";
        printSpace(n-1);
    }
    void displayRightTriangleAscending(int n, int m)
    {
        if(n==0)    //base case
        {
            return;
        }
        displayRightTriangleAscending(n-1,m);   //keep recursively calling func, till n decreases to 0
        printSpace(m-n);    //on the return journey, n is increasing, so print space (m-n), so space will be decreasing.
        display1toN(n);      //print 1 to n in each row, first row n = 1, so 1 val, 2nd row n = 2, so 2
        //displayNto1(n);
        cout<<endl;     //endl, for rows
    }




    void displayBoundaryStar(int n, int m)
    {
        if(n==0) return;
        displayBoundaryStar(n-1,m);
        //cout<<setw(2)<<n<<"  ";
        if(n==1||n==m) cout<<"* ";
        else cout<<"  ";

    }


    void printStar(int n)
    {
        if(n==0) return;
        cout<<"* ";
        printStar(n-1);
    }

    void displayRightTriangleStar(int n, int m) //pok i aint doin dz shekt
    {
        if(n==0) return;
        displayRightTriangleStar(n-1,m);
        printSpace(m-n);
        if(n==m)
            printStar(n);
        else
        displayBoundaryStar(n,n);
        //displayNto1(n);
        cout<<endl;
    }



    void displayDescendingUpper(int n, int m)
    {
        if(n==0) return;
        displayDescendingUpper(n-1,m);
        //cout<<setw(2)<<n<<"  ";
        cout<<m-n+1<<" ";

    }


    void displayRightTriangleDescendingUpper(int n, int m)  //check this
    {
        if(n==0)
        {
            return;
        }
        displayRightTriangleDescendingUpper(n-1,m);
        printSpace(m-n);
        displayDescendingUpper(n,m);
        //displayNto1(n);
        cout<<endl;
    }




void displayPyramidStar(int n, int m)   //eita korta hoba :3
    {
        if(n==0) return;
        displayPyramidStar(n-1,m);
        printSpace(m-n);
        if(n==1)
        {
            cout<<"* ";
        }
        else if(n==m)
        {
            printStar(2*n-1);
        }
        else{
        cout<<"* ";
        printSpace(2*(n-1)-1);
        //cout<<n<<" ";
        cout<<"* ";
        }
        cout<<endl;
    }



void same_value_upper_lines(int n)
{
    if (n == 0)
    {
        return;
    }
    same_value_upper_lines(n - 1);

    display_same_value(n, n);

    cout<<endl;
}


void same_value_lower_lines(int n)
{
    if (n == 0)
    {
        return;
    }

    display_same_value(n, n);

    cout<<endl;

    same_value_lower_lines(n - 1);
}


void display_wall_triangle(int n)
{
    same_value_upper_lines(n);
    same_value_lower_lines(n - 1);

}


void display_ascending(int n)
{
    if (n == 0)
    {
        return;
    }
    display_ascending(n - 1);

    cout<<n<< " ";
}



void display_descending(int n)
{
    if (n == 0)
    {
        return;
    }

    cout<<n<< " ";

    display_descending(n - 1);


}


void display_rows(int n)
{
    display_ascending(n);
    display_descending(n - 1);
}


void display_nice_wedge(int n, int m)
{
    if (n == 0)
    {
        return;
    }
    display_nice_wedge(n - 1, m);
    printSpace(m - n);
    display_rows(n);
    cout<<endl;
}



void display_nice_wedge_reversed(int n, int m)
{
    if (n == 0)
    {
        return;
    }
    display_nice_wedge(n - 1, m);
    display_rows( n);
    printSpace(n);
    cout<<endl;
}


//void print

void display_left_diamond(int n, int m)
{

    if (n == 0)
    {
        return;
    }
    printSpace(m - n);
    display_descending(n);
    cout<<endl;
    display_left_diamond(n - 1, m);
}



int main()
{

//        displayStarDollarHash(8);

//        display1234512345(6);

        int t = 0;

//        display12471116(9, t);

//        display1toN(8);

//        display_same_value(3, 6);

//        display12345(5, 5);

//          display_N_to_1(5);

//    displayRightTriangleAscending(5, 5);

//        displayRightTriangleStar(5,5);

//        displayRightTriangleDescendingUpper(5,5);

//        same_value_upper_lines(5);

//            same_value_lower_lines(5);


//            display_wall_triangle(6);

//            display_ascending(5);
//            display_descending(5 - 1);


//                display_rows(5);


//            display_nice_wedge(5, 5);

//                display_nice_wedge_reversed(5, 5);


                display_left_diamond(5, 5);




    return 0;
}
