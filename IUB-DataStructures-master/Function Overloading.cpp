#include <iostream>


using namespace std;



class PrintData
{
public:
    void print(int i)
    {
        cout<<"Printing int: " << i << endl;
    }

    void print(double f)
    {
        cout<<"Printing float: " << f << endl;
    }

    void print(char * c)
    {
        cout << "Printing character: " << c <<endl;
    }

};


class Box
{
public:
    double get_volume(void );
//    {
//        return (length * breadth * height);
//    }

    void set_length(double len);
//    {
//        length = len;
//    }

    void set_breadth(double bre);
//    {
//        breadth = bre;
//    }

    void set_height(double hei);
//    {
//        height = hei;
//    }

    Box operator + (const Box & b);
//    {
//        Box combo_box;
//
//        combo_box.length = this->length + b.length;
//
//        combo_box.breadth = this -> breadth + b.breadth;
//
//        combo_box.height = this -> height + b.height;
//
//        return combo_box;
//    }

private:
    double length;
    double breadth;
    double height;


};


int main()
{
    PrintData printer;

    printer.print(5);

    printer.print(1.2332);

    printer.print("fghfghf werwe");


    cout<<endl;

    Box Box1, Box2, Box3;

    double volume = 0.0;

    Box1.set_breadth(7.0);
    Box1.set_height(5.0);
    Box1.set_length(6.0);


    Box2.set_breadth(12.0);
    Box2.set_height(13.0);
    Box2.set_length(10.0);


    volume = Box1.get_volume();

    cout<<"Volume of Box1 :" <<volume <<endl;

    volume = Box2.get_volume();

    cout<<"Volume of Box2 :" <<volume <<endl;


    Box3 = Box1 + Box2;

    volume =  Box3.get_volume();

    cout<<"Volume of Box3 :" <<volume <<endl;


    return 0;
}



double Box::get_volume(void )
    {
        return (length * breadth * height);
    }


       void Box::set_length(double len)
    {
        length = len;
    }


     void Box::set_breadth(double bre)
    {
        breadth = bre;
    }


    void Box::set_height(double hei)
    {
        height = hei;
    }


    Box Box::operator + (const Box & b)
    {
        Box combo_box;

        combo_box.length = this->length + b.length;

        combo_box.breadth = this -> breadth + b.breadth;

        combo_box.height = this -> height + b.height;

        return combo_box;
    }
