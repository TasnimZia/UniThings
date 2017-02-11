#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int A[5][7];
    int n = 5,m = 7;


    //POPULATE
    int ll = 0, ul = 9;
    srand(time(NULL));

    for (int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            A[i][j] = ll + rand() % (ul - ll + 1);
        }
    }

    //DISPLAY IN 2D-ARRAY FORM
    cout <<"5x7 2-D Array: "<<endl<<endl;
    for (int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}

