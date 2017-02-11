#include <iostream>

#include <string>


using namespace std;

bool Palindrome(string);

void display(bool);


using namespace std;

int main()
{
    
    string input;
    
    
    
    
    
    
    cout << "Please Enter Your Text: ";
    
    
    getline(cin, input);
    
    
    display(Palindrome(input));
    
    
    
    
    return 0;
}


bool Palindrome(string text)
{
    
    bool isPalindrome = true;
    
    for (int i = 0, j = text.size() - 1; i < text.size(); i++, j--)
    {
        
        if (text[i] != text[j] && text[i] + 32 != text[j] && text[i] - 32 != text[j])
        {
            
            isPalindrome = false;
            break;
        }
    }
    return isPalindrome;
    
    
    
};


void display(bool)
{
    if (true)
    {
        cout<< "This is a palindrome.\n\n";
    }
    
    else
    {
        cout<<  "This is no palindrome.\n\n";
    }
    
    
};
