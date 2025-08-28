#include<iostream>
#include<climits>

using namespace std;

int main (void)
{
    int int_max = INT_MAX ;
    short sam = SHRT_MAX;
    long long_max = LONG_MAX;
    long long long_long_max = LLONG_MAX;

    unsigned short sue = sam ;

    cout << "sam has  " << sam << " dollars"<< endl;
    cout << "sue has  " << sue << " dollars"<< endl;
    cout << "add 1 to each account " << endl;
    
    sam = sam + 1;
    sue = sue + 1;
        
    cout << "now sam has  " << sam << " dollars"<< endl;
    cout << "now sue has  " << sue << " dollars"<< endl;

    sam = 0;
    sue = 0;
    cout << "------------------------------- " << endl;
    cout << "sam has  " << sam << " dollars"<< endl;
    cout << "sue has  " << sue << " dollars"<< endl;
    cout << "minus 1 to each account " << endl;
    sam = sam - 1;
    sue = sue - 1;

    cout << "now sam has  " << sam << " dollars"<< endl;
    cout << "now sue has  " << sue << " dollars"<< endl;






    return 0 ;
}