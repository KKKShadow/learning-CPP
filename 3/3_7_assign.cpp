#include<iostream>

using namespace std ;

int main (void)
{
    cout.setf(ios_base::fixed , ios_base::floatfield );
    float tree = 3 ;
    cout << "tree = " << tree << endl ; 

    int guess = 3.9832 ;
    cout << "guess = " << guess << endl ;

    int debt = 7.2E12 ;
    cout << "debt = " << debt << endl ;

    int auks ,bats , coots ;
    auks = 19.99 + 11.99 ;
    bats = (int)19.99 + (int)11.99 ;
    coots = int(19.99) + int(11.99) ;
    cout << "auks = " << auks << " , bats = " << bats << " , coots = " << coots << endl ;

    char ch = 'Z' ;
    cout << "The code for " << ch << " is " << int(ch) << endl ;
    cout << "Yes , the code is " << static_cast<int>(ch) << endl ; 
    // static_cast<类型> (对象)

    char grade = 65 ;
    cout << "grade = " << grade << endl ;
    return 0 ;
}


