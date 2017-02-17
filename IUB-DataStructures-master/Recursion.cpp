#include <iostream>

using namespace std;

void print_number_list(int lower_limit, int upper_limit);

int print_number_list_using_int(int lower_limit, int upper_limit, int &sum);

int finding_sum_of_terms(int lower_lim, int upper_lim, int sum);


int sum_test(int a, int &b)
{
    b = a * b;
    return b;
}


int main()
{
//    print_number_list(1, 4);
    int a = 2;
    int b = 5;
//    int c = &b;
//    cout<<sum_test(a, b)<<endl;
//    cout<<b<<endl;
    int temp = 0;
     int t = finding_sum_of_terms(1, 3, temp);
     cout<<t;


    return 0;
}


void print_number_list(int lower_limit, int upper_limit)
{
    if (lower_limit > upper_limit)
        return;
    cout<<lower_limit << " ";

    print_number_list(lower_limit + 1, upper_limit);
}


//need to fix
int print_number_list_using_int(int lower_limit, int upper_limit, int &sum)
{
    if (lower_limit > upper_limit)

        return lower_limit;
    cout<<lower_limit << " + ";
    sum = lower_limit + sum;
    return (lower_limit);

    print_number_list_using_int(lower_limit + 1, upper_limit, sum);
}



int finding_sum_of_terms(int lower_lim, int upper_lim, int sum)
{
    if (lower_lim > upper_lim)
    {

        return lower_lim;
    }

    sum = lower_lim + sum;

    return (lower_lim + finding_sum_of_terms(lower_lim + 1, upper_lim, sum));
}
