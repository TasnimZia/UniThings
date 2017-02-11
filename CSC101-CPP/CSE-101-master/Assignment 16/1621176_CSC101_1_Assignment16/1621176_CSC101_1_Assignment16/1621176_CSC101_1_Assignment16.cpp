#include<iostream>
using namespace std;

int main()
{
    int range;
    cout<<"Enter Range: ";
    cin>>range;
    cout<<endl;
    
    for (int term = 1;term <= range;term++)
    {
        int reverse = 0, num = term;
        while (num != 0)
        {
            int last_dig = num % 10;
            reverse = (reverse * 10) + last_dig;
            num /= 10;
        }
        
        
        if (term == reverse)
            cout<<term<<" Is A Palindrome."<<endl<<endl;
        
        //else
        // cout<<term<<" Is Not A Palindrome."<<endl<<endl;
        
        //cout<<"Reverse of "<<term
        //<<" is "<<reverse<<endl;
    }
    
    return 0;
}

