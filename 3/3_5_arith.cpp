#include<iostream>

using namespace std ;

int main (void)
{
    float hats , heads ;  //double 精度更高 结果正确  尽量用double
    cout.setf(ios_base::fixed , ios_base::floatfield );
    cout << "Enter a number : " ;
    cin >> hats ;  //50.25
    cout << "Enter another number : " ;
    cin >> heads ; // 11.17
    cout << "hats = " << hats << "  heads = " << heads << endl ;
    cout << "hats + heads = " << hats + heads << endl ;
    cout << "hats - heads = " << hats - heads << endl ;
    cout << "hats * heads = " << hats * heads << endl ;
    cout << "hats / heads = " << hats / heads << endl ;



    return 0 ;
}