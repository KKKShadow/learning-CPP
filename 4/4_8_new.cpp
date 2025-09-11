#include <iostream>
#include <string>

using namespace std ;


int main(void){


    int nights = 1001 ;
    int *pt = new int ;
    *pt = 1001 ;
    cout << "nights value = "<< nights << " : location = " << &nights << endl ;
    cout << "pt int value = " << *pt << " : location = "<< pt << endl ;

    double *pd = new double ;
    *pd = 10000001.0 ;
    cout << "pd double value = " << *pd << " : location = " << pd << endl ;
    cout << "location of pointer pd = " << &pd << endl ;

    cout << "size of pt = " << sizeof(pt) << endl ;
    cout << "size of *pt = " << sizeof(*pt) << endl ;

    cout << "size of pd = " << sizeof(pd) << endl ;
    cout << "size of *pd = " << sizeof(*pd) << endl ;

    delete pt ;

    double *p3 = new double [4] ;

    p3[0] = 1.1 ;
    p3[1] = 0.5 ;
    p3[2] = 0.8 ;
    p3[3] = 0.2 ;

    cout << "p3[0] = " << p3[0] << " , p3[1] = " << p3[1] << " , p3[2] = " << p3[2] <<" , p3[3] = " << p3[3] << endl ;
    
    p3 = p3+1 ;
    
    cout << "p3[0] = " << p3[0] << " , p3[1] = " << p3[1] << " , p3[2] = " << p3[2] << endl ;

    p3 = p3-1 ;
    delete [] p3 ;
    return 0 ;
}