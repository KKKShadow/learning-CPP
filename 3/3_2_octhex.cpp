#include<iostream> 
// #include<climits> 

using namespace std ;

int main (void)
{
    int cheat = 42;
    int wrist = 0x42;
    int inseam = 042;

    cout << "cheat  = "  << cheat << " , 42 in decimal"<<  endl ;
    cout << "wrist  = "  << wrist << " , 0x42 in hexadecimal"<< endl ;
    cout << "inseam = "  << inseam << " , 042 in octoal"<< endl ;

    cout << hex ;
    cout << "wrist  = "  << wrist << " , 0x42 in hexadecimal"<< endl ;

    cout << oct ;
    cout << "inseam = "  << inseam << " , 042 in octoal"<< endl ;

    cout << dec ;
    cout << "cheat  = "  << cheat << " , 42 in decimal"<<  endl ;
    
    return 0 ;

}
