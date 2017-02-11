#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    //DECLARATION
    int A[5];
    int n = 5;

    //POPULATE
    srand(time(NULL));
    int ll = 1, ul = 9;
    for (int i = 0;i < n;i++)
        A[i] = ll + rand() % (ul - ll + 1);

    //DISPLAY
    cout<<"Array Before Sort: ";
    for (int i = 0;i < n;i++)
        cout<<A[i]<<" ";
    cout<<endl;

    //SELECTION SORT
    for (int j = 0;j < n - 1;j++)
    {
        //FIND MAX LOCATION
        int mx = A[0], mxLoc = 0;
        for (int i = 1;i < n - j;i++)
        {
            if (mx < A[i])
            {
                mx = A[i];
                mxLoc = i;
            }
        }

        //cout<<"Max Location: "<<mxLoc<<endl;
        //SWAP
        int temp = A[mxLoc];
        A[mxLoc] = A[n - 1 - j];
        A[n - 1 - j] = temp;
    }

    //DISPLAY
    cout<<"Array After Sort: ";
    for (int i = 0;i < n;i++)
        cout<<A[i]<<" ";
    cout<<endl;

    //TAKE INPUT
    int x;
    cout<<"Enter Value to look for: ";
    cin>>x;

    //BINARY SEARCH
    int l = 0, u = n - 1;
    int mid = (l + u) / 2;

    while (l <= u)
    {
        if (A[mid] == x)
        {
            cout<<x<<" found at location "
                <<mid<<endl;
            break;
        }
        else if (A[mid] < x)
            l = mid + 1;
        else u = mid - 1;

        mid = (l + u) / 2;
    }

    if (l > u)
        cout<<x<<" not found\n";

    return 0;
}












