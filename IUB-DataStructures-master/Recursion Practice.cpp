#include <iostream>

using namespace std;


void display_till_n(int n);

void stars_row_helper(int n);

void print_stars(int n);

void odd_even_printer(int n);

void odd_even_list_printer(int n, int m);

void odd_even_list_summer(int n, int m, int &a);

void permute_printer(int first_term, int num_of_terms);

int permute_value(int first_term, int num_of_terms, int &prod);






int main()
{
    cout<<"Please enter the number of terms you want to print: ";

    int num_of_terms;

    cin>>num_of_terms;

//    display_till_n(num_of_terms);

//    stars_row_helper(num_of_terms);

//    print_stars(num_of_terms);

//    odd_even_printer(num_of_terms);

//        odd_even_list_printer(1, num_of_terms);
//        int a = 0;


//        odd_even_list_summer(0, num_of_terms, a);

//        cout<<endl<<"Sum: " <<a;

//    permute_printer(2, num_of_terms);

        int prod = 1;

        int b;
        b = permute_value(50, num_of_terms, prod);

        cout<<endl<<b;






    return 0;
}



void display_till_n(int n)
{
    if (n == 0)
    {
        return;
    }

    display_till_n(n - 1);

    cout<< n << " ";

    return;
}


void stars_row_helper(int n)
{
    if (n == 0)
    {
        return;
    }
    stars_row_helper(n - 1);
    cout<<"* ";

    return;

}

void print_stars(int n)
{
    if (n == 0)
    {
        return;
    }
    stars_row_helper(n);
    cout<<endl;
    print_stars(n - 1);

    return;
}

void odd_even_printer(int n)
{
    if (n <= 0)
    {
        return;
    }
    odd_even_printer(n - 2);

    cout<<n <<" ";

    return;
}


void odd_even_list_printer(int n, int m)
{
    if (m == 0)
    {
        return;
    }
    odd_even_list_printer(n + 2, m - 1);

    cout<<n << " ";

    return;
}


void odd_even_list_summer(int n, int m, int &a)
{
    if (m == 0)
    {

        return;
    }
    odd_even_list_summer(n + 2, m - 1, a);

    cout<<n << " ";

    a = n + a;

    return;
}


void permute_printer(int first_term, int num_of_terms)
{
    if (num_of_terms == 0)
    {
        return;
    }

    permute_printer(first_term - 1, num_of_terms - 1);

    cout<< first_term << " ";

    return;
}


int permute_value(int first_term, int num_of_terms, int &prod)
{
    if (num_of_terms == 0)
    {
        return 1;
    }

    permute_value(first_term - 1, num_of_terms - 1, prod);

    prod = first_term * prod;

    cout<< first_term << " ";

    return prod;
}
