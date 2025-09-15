#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char animal[20] = "bear" ;
    const char *bird = "wren" ;
    char *ps ;

    cout << animal << " and " << bird << endl ;
    // cout << ps <<endl ;

    cout << "Enter a kind of animal: " ;
    // cin >> ps ;
    // cin >> bird ; 
    cin >> animal ;
    cout << animal << endl ;

    ps = animal ;
    cout << ps << endl ;

    cout << animal << " at " << (int*)animal << endl ;
    cout << ps << " at " << (int*)ps << endl ;

    cout << "after using strcpy():\n" ;
    ps = new char [strlen(animal) + 1] ;
    strcpy(ps, animal) ;

    cout << ps << " at " << (int*)ps << endl ;
    delete [] ps ;
    return 0;
}