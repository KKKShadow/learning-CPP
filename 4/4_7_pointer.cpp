#include <iostream>
#include <string>

using namespace std ;

int main (void){
    int donuts = 6 ;   // 4byte
    double cups  = 4.5 ; // 8byte

    cout <<"donuts = "<< donuts << "  and donuts address = "<< &donuts << endl ;
    cout <<"cups = "<< cups << "  and cups address = "<< &cups << endl ;

    int updates = 6 ;
    int *p_updates ;
    p_updates = &updates ;

    cout << "updates = " << updates << " and &updates  = " << &updates << endl ;
    cout << "p_updates = " << p_updates << " and *p_updates = " << *p_updates << endl ;
    cout << "&p_updates address = " << &p_updates << endl ; 

    return 0 ;
}