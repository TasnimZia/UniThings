#include<iostream.h>
#include<conio.h>

main()
{
    clrscr();
    
    cout<<"\n ********* Diamond  *********\n"<<endl;
    
    int x_1=19;
    int y_1=5;
    
    for(int count_1=1;count_1<=5;count_1++)
    {
        gotoxy(x_1,y_1);
        
        for(int count_2=1;count_2<=count_1;count_2++)
            cout<<"* ";
        
        x_1--;
        y_1++;
        
        cout<<endl;
    }
    
    
    int x_2=16;
    int y_2=10;
    
    for(int count_3=5;count_3>1;count_3--)
    {
        gotoxy(x_2,y_2);
        
        for(int count_4=count_3;count_4>1;count_4--)
            cout<<"* ";
        
        x_2++;
        y_2++;
        
        cout<<endl;
    }
    getch();
    return 0;
}