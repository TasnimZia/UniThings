#include<iostream>
using namespace std;

int main()
{
    int h;
    cout<<"Enter The Number of rows: ";
    cin>>h;

    cout<<endl;


  int stars = h;
    for (int i = 1;i <= h;i++)
    {
        //SPACES
        for (int j = 2;j <= i;j++)
            cout<<"  ";

        //STARS
        for (int j = 0;j <= stars;j++)
            cout<<"* ";

        cout<<endl;

        stars -= 2;
    }

    return 0;
}
