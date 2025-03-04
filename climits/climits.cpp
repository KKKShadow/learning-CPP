#include<iostream>
#include <climits>

using namespace std;

int main (void)
{
    int int_max = INT_MAX ;
    short short_max = SHRT_MAX;
    long long_max = LONG_MAX;
    long long long_long_max = LLONG_MAX;


    cout << "int max value is " << int_max << endl;

    cout << "int maximum byte is " << sizeof(int_max) << " bytes ." << endl ;


    cout << "short max value is " << short_max << endl;

    cout << "short maximum byte is " << sizeof short_max << " bytes ." << endl ;
 
    cout << "long max value is " << long_max << endl;

    cout << "long maximum byte is " << sizeof long_max << " bytes ." << endl ;
 
    cout << "longlong max value is " << long_long_max << endl;

    cout << "longlong maximum byte is " << sizeof long_long_max << " bytes ." << endl ;
 
 
 
 
    return 0;
}